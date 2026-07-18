#include "../../include/process.h"


process processes[16];

int process_count = 0;


int process_create(void (*entry)())
{
    if(process_count >= 16)
        return -1;


    processes[process_count].id = process_count;
    processes[process_count].state = 1;
    processes[process_count].entry = entry;


    process_count++;

    return process_count - 1;
}
