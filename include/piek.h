#ifndef PIEK_H
#define PIEK_H

#define PIEK_VERSION "1.0.0"


// Core
void piek_init();
void piek_print(char *text);


// CPU
void gdt_init();
void idt_init();


// Interrupt
void interrupt_handler(int interrupt);


// Timer
void timer_init();
void timer_tick();
unsigned int timer_get_ticks();


// Memory
void paging_init();

void memory_init();
unsigned int memory_usage();

void *piek_malloc(unsigned int size);
void piek_free(void *ptr);


// Process
void scheduler_run();

int process_create(void (*entry)());


// Syscall
void syscall_handler(int id);


// Drivers
void drivers_init();

void keyboard_init();
char keyboard_getkey();

void display_init();
void display_clear();

void disk_init();

void mouse_init();


// Filesystem
void piefs_init();

int file_create(char *name);

int file_write(char *name, char *data);

char *file_read(char *name);


#endif


