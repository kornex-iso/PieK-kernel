# Pie K Kernel 1.0

Open Source Kernel Project.

Goals:
- Memory management
- Process management
- Drivers
- Filesystem
- Networking
- Kernel API

License: GPL-3.0


 # Pie K Kernel 1.0 Alpha

Repository:
https://github.com/kornex-iso/PieK-kernel.git

Pie K is an open-source hobby operating system kernel written in C and Assembly.

Pie K is not a complete operating system. It is a kernel foundation that developers can use to build their own operating systems.

Features:
- x86 32-bit kernel
- Multiboot GRUB boot support
- CPU initialization
- GDT and IDT support
- Interrupt handling
- Timer system
- Memory management
- Paging support
- Heap allocator
- Basic process system
- Scheduler
- Driver framework
- Basic filesystem (PieFS)
- System call structure
- Basic display output

How to build:

git clone https://github.com/kornex-iso/PieK-kernel.git

cd PieK-kernel

make

The kernel will generate:

piek.bin

You can boot it using QEMU or create an ISO using GRUB.

Developers can use Pie K as a base to create their own operating system:

Example:



MyOS
│
├── Pie K Kernel
│
├── Desktop Environment
│
├── Applications
│
├── Shell
│
└── Drivers

Developers are free to modify, extend, and create new operating systems using Pie K.

Future plans:
- More hardware drivers
- Better filesystem
- User mode
- GUI framework
- Networking stack
- 64-bit support

Created by Kornex
Pie K Kernel 1.0 Alpha
Open Source OS Development Project
