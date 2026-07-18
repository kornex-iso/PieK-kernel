#include "../../include/piek.h"


void syscall_handler(int id)
{

    switch(id)
    {

        case 1:
            piek_print("Hello from system call");

            break;


        default:
            break;
    }

}
