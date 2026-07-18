#include "../../include/piefs.h"


#define MAX_FILES 32
#define MAX_SIZE 256


struct file
{
    char name[32];
    char data[MAX_SIZE];
    int used;
};


struct file files[MAX_FILES];


void piefs_init()
{
    for(int i=0;i<MAX_FILES;i++)
    {
        files[i].used=0;
    }
}


int file_create(char *name)
{
    for(int i=0;i<MAX_FILES;i++)
    {
        if(files[i].used==0)
        {
            files[i].used=1;

            for(int x=0; name[x]; x++)
                files[i].name[x]=name[x];

            return 0;
        }
    }

    return -1;
}


int file_write(char *name,char *data)
{
    for(int i=0;i<MAX_FILES;i++)
    {
        if(files[i].used)
        {
            int match=1;

            for(int x=0;name[x];x++)
            {
                if(files[i].name[x]!=name[x])
                    match=0;
            }


            if(match)
            {
                for(int x=0;data[x];x++)
                    files[i].data[x]=data[x];

                return 0;
            }
        }
    }

    return -1;
}


char *file_read(char *name)
{
    for(int i=0;i<MAX_FILES;i++)
    {
        if(files[i].used)
        {
            return files[i].data;
        }
    }

    return 0;
}
