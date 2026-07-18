#include "../../include/piek.h"


#define VGA_MEMORY 0xB8000


void piek_print(char *text)
{
    char *video = (char*)VGA_MEMORY;

    while(*text)
    {
        *video = *text;
        video++;

        *video = 0x07;
        video++;

        text++;
    }
}
