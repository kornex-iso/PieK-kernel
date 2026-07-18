#include "../../include/piek.h"

void drivers_init()
{
    keyboard_init();
    display_init();
    disk_init();
    mouse_init();
}
