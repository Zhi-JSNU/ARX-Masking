
Q		:= @

BINARY = testChaskey
VECTORS = vector.o
C_SOURCE = chaskey.c
LOADSET = MBedAES
FP_FLAGS	?= -msoft-float
ARCH_FLAGS	= -mthumb -mcpu=cortex-m0 $(FP_FLAGS)

###############################################################################
# Executables

PREFIX		?= arm-none-eabi
CC		:= $(PREFIX)-gcc
LD		:= $(PREFIX)-gcc
OBJCOPY		:= $(PREFIX)-objcopy
OBJDUMP		:= $(PREFIX)-objdump

###############################################################################
# Source files

LDSCRIPT	= $(LOADSET).ld
OBJS		+= $(BINARY).o
ELMOASMFUNCTIONS = ../../elmoasmfunctions.o


###############################################################################
# C flags

#CFLAGS += -Os -g
CFLAGS += -O0 -g
CFLAGS += -Wextra -Wshadow -Wimplicit-function-declaration
CFLAGS += -Wredundant-decls -Wmissing-prototypes -Wstrict-prototypes
CFLAGS += -fno-common -ffunction-sections -fdata-sections

###############################################################################
# C & C++ preprocessor common flags

CPPFLAGS	+= -MD
CPPFLAGS	+= -Wall -Wundef

###############################################################################
# Linker flags

LDFLAGS		+= --static -nostartfiles
LDFLAGS		+= -T$(LDSCRIPT)
LDFLAGS		+= -Wl,-Map=$(*).map
LDFLAGS		+= -Wl,--gc-sections

###############################################################################
# Used libraries

LDLIBS		+= -Wl,--start-group -lc -lgcc -lnosys -Wl,--end-group

###############################################################################
###############################################################################
###############################################################################

all: elf bin list
elf: $(BINARY).elf
bin: $(BINARY).bin
list: $(BINARY).list

images: $(BINARY).images

$(BINARY).images: $(BINARY).bin $(BINARY).list $(BINARY).map

$(BINARY).bin: $(BINARY).elf
	$(Q)$(OBJCOPY) -Obinary $(BINARY).elf $(BINARY).bin

$(BINARY).list: $(BINARY).elf
	$(Q)$(OBJDUMP) -S $(BINARY).elf > $(BINARY).list

$(BINARY).elf $(BINARY).map: $(OBJS) $(LDSCRIPT)
	$(Q)$(LD) $(LDFLAGS) $(VECTORS) $(ARCH_FLAGS) $(OBJS) $(C_SOURCE) $(ELMOASMFUNCTIONS) $(LDLIBS) -o $(BINARY).elf

$(BINARY).o: $(BINARY).c
	$(Q)$(CC) $(CFLAGS) $(CPPFLAGS) $(ARCH_FLAGS) -o $(BINARY).o -c $(BINARY).c

clean:
	$(Q)$(RM) $(BINARY).o $(BINARY).d $(BINARY).elf $(BINARY).bin $(BINARY).list $(BINARY).map chaskey.s chaskeyLocal

chaskeyLocal: testChaskeyLocal.c chaskey.c
	gcc testChaskeyLocal.c chaskey.c -g -o chaskeyLocal
	
