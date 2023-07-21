#@ prepared by Adham Hesham (Learn in Depth)
cc=arm-none-eabi-
CFLAGS= -g -mcpu=arm926ej-s
Incs= -I .
Libs= 
SRC= $(wildcard *.c)
OBJ= $(SRC:.c=.o)
As= $(wildcard *.s)
ASOBJ= $(As:.s=.o)

learn_in_depth.bin: learn_in_depth.elf
	$(cc)objcopy.exe -O binary learn_in_depth.elf learn_in_depth.bin
	@echo "------Building is done------"
learn_in_depth.elf: $(OBJ) $(ASOBJ)
	$(cc)ld.exe -T linker_script.ld $(Libs) $(OBJ) $(ASOBJ) -o learn_in_depth.elf -Map=Map_file.map
%.o:%.c
	$(cc)gcc.exe -c $(Incs) $(CFLAGS) $< -o $@
%.o:%.s
	$(cc)as.exe $(Incs) $(CFLAGS) $< -o $@
clean_all:
	rm *.o *.bin *.elf
	
clean:
	rm *.bin *.elf