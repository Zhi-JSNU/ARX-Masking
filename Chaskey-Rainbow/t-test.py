#20200925 Create by ZHI

import numpy as np
from binascii import unhexlify, hexlify
from rainbow.generics import rainbow_arm
from rainbow.utils import hw, plot
import lascar
from lascar.tools.aes import sbox
import time
import matplotlib
import matplotlib.pyplot as plt
matplotlib.use('tkagg')
from scipy import stats
import random
import itertools
import collections
import gc

#array combination
def flatten(l):
    for el in l:
        if isinstance(el, collections.abc.Iterable) and not isinstance(el, (str, bytes)):
            yield from flatten(el)
        else:
            yield el

#Show all elements
#np.set_printoptions(threshold=np.inf)

# rainbow passes the whole instance as a parameter for function redefinition
def new_genrandom(e):
    e['r0'] = 0x12345678
    return True  # Tell rainbow to return to the caller
   
counter = 1
counter_1 = 1

def random_key():
    return random.randint(-10000, 100000)
    
class pycolor:
    BLACK = '\033[30m'
    RED = '\033[31m'
    GREEN = '\033[32m'
    YELLOW = '\033[33m'
    BLUE = '\033[34m'
    PURPLE = '\033[35m'
    CYAN = '\033[36m'
    WHITE = '\033[37m'
    RETURN = '\033[07m' 
    ACCENT = '\033[01m' 
    FLASH = '\033[05m' 
    RED_FLASH = '\033[05;41m' 
    END = '\033[0m'
    
def chaskeyMasking_encrypt(key, plaintext, binFile):
    
    e = rainbow_arm(sca_mode=True)#Debug mode instead of sca_mode=True
    #e = rainbow_arm()
    #e.function_calls = True #Debug mode maybe need this.
    #e.setup(sca_mode=True)
    print(pycolor.GREEN+"Loading "+ binFile + "..."+pycolor.END)
    #load the chaskey
    #e.load("chaskey.bin", typ=".elf") 
    e.load(binFile, typ=".elf") 
    #It seems that comment out to deactivate the side-channel mode to debug the emulation
    e.mem_trace = True 
    e.trace_regs = True 
    #key address declare(the k in chaskey(k,m,v))
    rk_addr = 0xDEAD1000
    e[rk_addr] = key
    
    #message address and output declaration (the m and v in chaskey(k,m,v))
    message_address = 0xDEAD2000
    destination_buffer = 0xDEAD3000
    e[message_address] = plaintext
    
    #Need to do this so this buffer is mapped into unicorn   
    e[destination_buffer] = b'\x00'*16
    
    # chaskey_encrypt(rk, message, destination)
    e["r0"] = rk_addr
    e["r1"] = message_address
    e["r2"] = destination_buffer

    #e.trace_reset()
    #when Unicorn tries to execute code at address 0, (mostly) when the code reaches the end of the (chaskey?)function,maybe it needs a "return"? 
    e[0] = 0
    #It seems that e.start(e.functions["chaskey"] | 1, 0) starts the emulation in thumb mode, but the chaskey function does not have Thumb code (it's regular ARM mode)
    e.start(e.functions["chaskey"] , 0)
    #Read out the ciphertext

    # Hamming weight + noise to pretend we're on a real target 
    #trace = np.array([hw(i) for i in e.sca_values_trace]) + np.random.normal(0, 0.0, #(len(e.sca_values_trace)))
    trace = np.array([hw(i) for i in e.sca_values_trace])
    #trace = np.array([hw(i) for i in e.sca_values_trace]) + np.random.normal(
    #    0, 1.0, (len(e.sca_values_trace)))

    #trace = e.sca_values_trace
    del e
    return trace

#--------------------------Masking processing (Fixed Input)-------------------------------------- 
class CortexMChaskeyContainer(lascar.AbstractContainer):
    
    def generate_trace(self,idx):
        #plaint text should be an array (16 here)
        #plaintext = np.random.randint(0,256,(16,),dtype='<u4')
        
        plaintext = np.array([0x00000001,0x00000000,0x00000001,0x00000000,
			       0x00000001,0x00000000,0x00000001,0x00000000,
			       0x00000001,0x00000000,0x00000001,0x00000000,
			       0x00000001,0x00000000,0x00000001,0x00000000],dtype='<u4')
			      
        print("The plaintext is:", plaintext)
        binFile = "chaskeyMasking.bin"
        leakage = np.array(chaskeyMasking_encrypt(KEY, plaintext.tobytes(), binFile)) #leakage generation
        global counter
        print("counter =", pycolor.RED+str(counter)+pycolor.END)
        counter = counter + 1   
        return lascar.Trace(leakage, plaintext)

#--------------------------Masking processing (Random Input)--------------------------------------       
class CortexMChaskeyContainer_Masking(lascar.AbstractContainer):
    
    def generate_trace(self,idx):
        plaintext = np.random.randint(0,256,(16,),dtype='<u4') #plaint text should be an array (16 here)
        '''
        plaintext = np.array([0x00000001,0x00000000,0x00000001,0x00000000,
			       0x00000001,0x00000000,0x00000001,0x00000000,
			       0x00000001,0x00000000,0x00000001,0x00000000,
			       0x00000001,0x00000000,0x00000001,0x00000000],dtype='<u4')
			       '''
        print("The plaintext is:", plaintext)
        binFile = "chaskeyMasking.bin"
        leakage = np.array(chaskeyMasking_encrypt(KEY, plaintext.tobytes(), binFile)) #leakage generation
        global counter_1
        print("counter =",pycolor.RED+str(counter_1)+pycolor.END)   
        counter_1 = counter_1 + 1   
        return lascar.Trace(leakage, plaintext)

#--------------------------Masking processing (Fixed Input)-------------------------------------- 
N = 500
#The key length of Chaskey is set as 128 bit
#KEY = bytes(range(16))
KEY = np.array([0x00000001,0x00000002,0x00000003,0x00000004],dtype='<u4').tobytes()

print("key=",KEY) 
start_time = time.time()
#simulate traces
container = CortexMChaskeyContainer(N)
leakages_fixed = container[:].leakages
process_time = time.time() - start_time
meanLeakage_fixed = np.mean(leakages_fixed, axis=0)
#print(pycolor.YELLOW+"The leakage is:"+pycolor.END, leakages_fixed)
#print("The leakage is:", leakages[0][0])
#print("The mean leakage is:", meanLeakage_fixed)
print(pycolor.YELLOW+"process_time:" +pycolor.END + pycolor.PURPLE+ format(process_time) + "[sec]"+pycolor.END)
#Using vispy to plot traces
#plot(leakages, highlight=0x00)
#plot(leakages_fixed)
#plot(meanLeakage)

#--------------------------Masking processing (Random input)-------------------------------------- 
N_1 = 500
#The key length of Chaskey is set as 128 bit
#KEY = bytes(range(16),dtype='<u4')
KEY = np.array([0x00000001,0x00000002,0x00000003,0x00000004],dtype='<u4').tobytes()
#KEY = np.array([random_key(),random_key(),random_key(),random_key()],dtype='<u4').tobytes()
print("key=",KEY) 
start_time = time.time()
#simulate traces
container_random = CortexMChaskeyContainer_Masking(N_1)
leakages_random = container_random[:].leakages
process_time = time.time() - start_time
meanLeakage_random = np.mean(leakages_random, axis=0)

#print(pycolor.YELLOW+"The masked leakage is:"+pycolor.END, leakages_random)
#print("The masked leakage is:", leakages_random[0][0])
#print(pycolor.YELLOW+"The masked mean leakage is:"+pycolor.END, meanLeakage_random)
print(pycolor.YELLOW+"process_time:" +pycolor.END + pycolor.PURPLE+ format(process_time) + "[sec]"+pycolor.END)
#Using vispy to plot traces
#plot(leakages, highlight=0x00)
#plot(leakages_random)
#plot(meanLeakage)

#--------------------------welch's T-test-------------------------------------- 

#operands could not be broadcast without reshape
#leakages_fixed = leakages_fixed.reshape([-1,1])
#leakages_random = leakages_random.reshape([-1,1])
leakages_fixed = list(flatten(leakages_fixed))
leakages_random = list(flatten(leakages_random))
test_result = stats.ttest_ind(leakages_fixed,leakages_random, equal_var = False)
#test_result = stats.ttest_ind(meanLeakage,meanLeakage_Masking, equal_var = False)
print(pycolor.YELLOW+"Result:"+pycolor.END, pycolor.RED+str(test_result)+pycolor.END)
fig = plt.figure()
ax = fig.add_subplot(111)

#data test
'''
with open('leakages_fixed.txt', 'w') as f:
  print(leakages_fixed, file=f)
  
with open('leakages_random.txt', 'w') as f:
  print(leakages_random, file=f)
'''
# bin is set as 32 because the HD is from 0 to 31
ax.hist(leakages_fixed, bins=32, color='red', alpha=.5)  
ax.hist(leakages_random, bins=32, color='blue', alpha=.5) 
#ax.plot(leakages_random, color='red', alpha=.5)
#ax.plot(leakages_random, color='green', alpha=.5)
ax.set_title('leakages_fixed:Red     leakages_random:Blue') 
ax.set_xlabel('Hamming Distance') 
ax.set_ylabel('The Number of Instructions')
#plt.plot(grid, sps.norm.pdf(grid), color='red', label='density')
fig.show()
plt.savefig('t-test.jpg')


