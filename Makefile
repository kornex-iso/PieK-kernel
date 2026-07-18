CC=gcc
LD=ld
NASM=nasm

CFLAGS=-m32 -ffreestanding -fno-pie -fno-stack-protector


OBJS=\
boot/boot.o \
kernel/core/print.o \
kernel/core/main.o \
kernel/core/panic.o \
kernel/core/version.o \
kernel/cpu/gdt.o \
kernel/cpu/idt.o \
kernel/drivers/driver.o \
kernel/drivers/keyboard.o \
kernel/drivers/display.o \
kernel/drivers/disk.o \
kernel/drivers/mouse.o \
kernel/drivers/timer.o \
kernel/memory/heap.o \
kernel/memory/paging.o \
kernel/memory/memory.o \
kernel/process/process.o \
kernel/process/scheduler.o \
kernel/fs/piefs.o \
kernel/net/network.o \
kernel/syscall/syscall.o


all: piek.bin


boot/boot.o: boot/boot.asm
	$(NASM) -f elf32 boot/boot.asm -o boot/boot.o


piek.bin: $(OBJS)
	$(LD) -m elf_i386 -T linker.ld $(OBJS) -o piek.bin


%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@


clean:
	rm -f $(OBJS) piek.bin
