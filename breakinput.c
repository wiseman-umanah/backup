#include "main.h"

/*
* brkdown_args - splits arguments with _strtok()
* @buffer: the array of arguments
* Return: 0 if failed
*/
int brkdown_args(char *buffer)
{
    char *temp;
    char **args = NULL;
    int i;

    args = malloc(strlen(buffer) + 1 + sizeof(char));
    temp = malloc(strlen(buffer));
    if (args == NULL || temp == NULL)
        return (0);
    i = 0;
    temp = _strtok(buffer, " ");
    while (temp != NULL)
    {
        args[i] = temp;
        temp = _strtok(NULL, " ");
        i++;
    }
    free(temp);
    execute_file(args, i);
}