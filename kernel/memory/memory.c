#include "../../include/piek.h"

unsigned int memory_used = 0;


void memory_init()
{
    memory_used = 0;
}


unsigned int memory_usage()
{
    return memory_used;
}
