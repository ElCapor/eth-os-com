export ASMFLAGS=-f elf32
export CFLAGS=-m32 -fno-stack-protector -fno-builtin -nostdlib -ffreestanding -pedantic -O0 -std=gnu99
export LDFLAGS=-m elf_i386
