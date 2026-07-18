#include "../../include/piek.h"

void interrupt_handler(int interrupt)
{
    switch(interrupt)
    {
        case 32:
            timer_tick();
            break;

        default:
            break;
    }
}
