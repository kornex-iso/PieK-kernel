#include "../../include/piek.h"


static unsigned char heap[1024 * 64];

unsigned int heap_index = 0;


void *piek_malloc(unsigned int size)
{
    if(heap_index + size >= sizeof(heap))
    {
        return 0;
    }

    void *ptr = &heap[heap_index];

    heap_index += size;

    return ptr;
}


void piek_free(void *ptr)
{
    // future memory reclaim
}
