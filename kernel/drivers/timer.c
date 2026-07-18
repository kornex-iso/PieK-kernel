#include "../../include/piek.h"

unsigned int ticks = 0;


void timer_init()
{
    ticks = 0;
}


void timer_tick()
{
    ticks++;
}


unsigned int timer_get_ticks()
{
    return ticks;
}
