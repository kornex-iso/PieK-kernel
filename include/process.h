#ifndef PROCESS_H
#define PROCESS_H


typedef struct
{
    int id;
    int state;
    void (*entry)();

} process;


extern process processes[16];
extern int process_count;


int process_create(void (*entry)());


#endif
