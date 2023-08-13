#include "main.h"

/*
* exit_com - handles exit commands
* @buffer: the array of arguments
* Return: 0 if successful, 1 if failed
*/
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