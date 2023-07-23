#@ copyright : adham
cc= arm-none-eabi-
CFlags= -mthumb -mcpu=cortex-m3 -gdwarf-2
incs=-I .
libs=
SRC=$(wildcard *.c)
OBJ=$(SRC:.c=.o)
AS=$(wildcard *.s)
ASOBJ=$(AS:.s=.o)
Project_name=Learn_in_depth_cortex_m3
learn_in_depth.bin: learn_in_depth.elf
	$(cc)objcopy.exe -O binary learn_in_depth.elf learn_in_depth.bin
	@echo "----------build is done---------"
learn_in_depth.elf:$(OBJ) $(ASOBJ)
	$(cc)ld.exe -T linker_script.ld $(libs) $(ASOBJ) $(OBJ) -o learn_in_depth.elf -Map=Mape_file.map
	
%.o:%.c
	$(cc)gcc.exe -c  $(incs) $(CFlags) $< -o $@
	
%.o: %.s
	$(cc)as.exe  $(incs) $(CFlags) $< -o $@

	
	
clean_all: 
	rm *.o *.bin *.elf
	
clean:
	rm *.elf *.bin