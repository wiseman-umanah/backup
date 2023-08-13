#include "main.h"

int exit_com (char **buffer)
{
    if (strcmp(*buffer, "exit") == 0 || *buffer == NULL)
    {
        free(buffer);
        exit(98);
        return (0);
    }
    else
    {
        return (1);
    }
    
}