#include "main.h"

int execute_file(char **buffer, int buff_size)
{
    pid_t pid = fork();
    buffer[buff_size] = NULL;
    char str[100] = "/bin/";
    if (str == NULL)
        return(0);
    if (strncmp(*buffer, str, strlen(str)) == 0)
    {
        strcpy(str, *buffer);
    }
    else
        strcat(str, buffer[0]);

    exit_com (buffer);
    if (pid == 0) {
        // Child process
        execve(str, buffer, NULL);
    } else if (pid > 0) {
        // Parent process
        wait(NULL);
    } else {
        // Forking failed
       exit(98);
    }
    return (1);
}