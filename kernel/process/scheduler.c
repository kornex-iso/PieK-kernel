#include "../../include/process.h"


int current_process = 0;


void scheduler_run()
{
    if(process_count == 0)
        return;


    current_process++;


    if(current_process >= process_count)
        current_process = 0;


    processes[current_process].entry();
}
