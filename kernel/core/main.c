#include "../../include/piek.h"


void test_program()
{
    piek_print("User task started");
}


void kernel_main()
{

    piek_print("Welcome to Pie K Kernel 1.0");


    // Test CPU
    gdt_init();

    idt_init();


    // Test drivers
    drivers_init();


    // Test process
    process_create(test_program);


    while(1)
    {
        asm volatile("hlt");
    }

}
