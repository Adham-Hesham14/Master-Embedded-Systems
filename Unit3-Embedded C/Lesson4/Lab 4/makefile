#@ copyright : adham
cc= arm-none-eabi-
CFlags= -mthumb -mcpu=cortex-m4 -gdwarf-2 -g
incs=-I .
libs=
SRC=$(wildcard *.c)
OBJ=$(SRC:.c=.o)
AS=$(wildcard *.s)
ASOBJ=$(AS:.s=.o)
Project_name=unit3_lab4_cortexM4

$(Project_name).bin: $(Project_name).elf
	$(cc)objcopy.exe -O binary $(Project_name).elf $(Project_name).bin
	cp $(Project_name).elf $(Project_name).axf
	@echo "----------build is done---------"
$(Project_name).elf:$(OBJ) $(ASOBJ)
	$(cc)ld.exe -T linker_script.ld $(libs) $(ASOBJ) $(OBJ) -o $(Project_name).elf -Map=Mape_file.map
	
%.o:%.c
	$(cc)gcc.exe -c  $(incs) $(CFlags) $< -o $@
	
%.o: %.s
	$(cc)as.exe  $(incs) $(CFlags) $< -o $@

	
	
clean_all: 
	rm *.o *.bin *.elf *.map
	
clean:
	rm *.elf *.bin