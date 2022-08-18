#20200518 Create by ZHI
#20220810 Revised by ZHI

import numpy as np
from binascii import unhexlify, hexlify
from rainbow.generics import rainbow_arm
from rainbow.utils import hw, plot
import lascar
from lascar.tools.aes import sbox
import time
import collections
import itertools
from rainbow.utils.plot import viewer
from visplot import plot
from vispy.gloo.util import _screenshot
import vispy.io as io
import visplot

#array combination
def flatten(l):
    for el in l:
        if isinstance(el, collections.abc.Iterable) and not isinstance(el, (str, bytes)):
            yield from flatten(el)
        else:
            yield el

# rainbow passes the whole instance as a parameter for function redefinition
def new_genrandom(e):
    e['r0'] = 0x12345678
    return True  # Tell rainbow to return to the caller
   
counter = 1

def chaskey_encrypt(key, plaintext):
    
    e = rainbow_arm(sca_mode=True)#Debug mode instead of sca_mode=True
    #e = rainbow_arm()
    #e.function_calls = True #Debug mode maybe need this.
    #e.setup(sca_mode=True)

    print("Loading chaskey.elf ... ")

    #e = rainbow_stm32f215(local_vars={'generate_random': new_genrandom})

    e.load("chaskey.bin", typ=".elf") #load the chaskey
    #It seems that comment out to deactivate the side-channel mode to debug the emulation
    e.mem_trace = True 
    e.trace_regs = True 
    #key address declare(the k in chaskey(k,m,v))
    rk_addr = 0xDEAD1000
    e[rk_addr] = key
    # writes in little endian k[4]
    #e[rk_addr] = key[:4] 
    #e[rk_addr+4] = key[4:8]
    #e[rk_addr+8] = key[8:12]
    #e[rk_addr+12] = key[12:16]
    #e[rk_addr] = key[0:4;-1]
    #e[rk_addr] = key[0] 
    #e[rk_addr+4] = key[1]
    #e[rk_addr+8] = key[2]
    #e[rk_addr+12] = key[3]
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
    #print("The output is:",e[destination_buffer:destination_buffer+16])
    #print("The output is:",e[destination_buffer])
    #print("The key is:",e[rk_addr])
    #print("The message is:",e[message_address])
    disassembly = e.sca_address_trace
    # Hamming weight + noise to pretend we're on a real target 
    trace = np.array([hw(i) for i in e.sca_values_trace]) + np.random.normal(0, 1.0, (len(e.sca_values_trace)))
    #No noise
    #trace = np.array([hw(i) for i in e.sca_values_trace])
    #trace = e.sca_values_trace
    del e
    return trace

class CortexMChaskeyContainer(lascar.AbstractContainer):
    
    def generate_trace(self,idx):
        plaintext = np.random.randint(0,256,(16,),dtype='<u4') #plaint text should be an array (16 here)
        '''
        plaintext = np.array([
			       0x00000001,0x00000000,0x00000001,0x00000000,
			       0x00000001,0x00000000,0x00000001,0x00000000,
			       0x00000001,0x00000000,0x00000001,0x00000000,
			       0x00000001,0x00000000,0x00000001,0x00000000],dtype='<u4')
        '''

        print("The plaintext is:", plaintext)
        leakage = np.array(chaskey_encrypt(KEY, plaintext.tobytes())) #leakage generation
        global counter
        print("counter=",counter)   
        counter = counter + 1   
        return lascar.Trace(leakage, plaintext)

N = 1
#The key length of Chaskey is set as 128 bit
#KEY = bytes(range(16))
KEY = np.array([0x00000001,0x00000002,0x00000003,0x00000004],dtype='<u4').tobytes()

print("key=",KEY) 
start_time = time.time()
#simulate traces
#container = CortexMChaskeyContainer(N)
container = CortexMChaskeyContainer(N)
leakages = container[:].leakages
process_time = time.time() - start_time
meanLeakage = np.mean(leakages, axis=0)

#print("The leakage is:", leakages)
#print("The leakage is:", leakages[0][0])
#print("The mean leakage is:", meanLeakage)
print("process_time:{0}".format(process_time) + "[sec]")
#trace combination
leakages = list(flatten(leakages))
#Using vispy to plot traces
#plot(leakages, highlight=0x00)

#show all attributes of the python project
#attributes = dir(plot)
#print(attributes)
#vispyAttributes = dir(visplot)
#print(vispyAttributes)
#plot.BG_DARK=False
plot(leakages)

# Use render to generate an image object
#img=canvas.render()

# Use write_png to export your wonderful plot as png ! 
#io.write_png("wonderful.png",img)
#plot(meanLeakage)


