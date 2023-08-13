#include "main.h"

static char *ARG1;

int main(int arg, char **av)
{
    ssize_t get;
    /*Let's get the first arg to use through out the whole program*/
    ARG1 = av[0];
    char *buffer = NULL;
    size_t buff_size = 0;
    int exe = 0;
    int fd;
    fd = checkargs(arg, av, &exe);
    while (1)
    {
        /*Write $ to STDIN*/
        write(STDOUT_FILENO, "$ ", 2);
        /*Get STDIN from STDIN*/
        get = getline(&buffer, &buff_size, stdin);
        if (get == EOF)
        {
            exit(98);
            return (0);
        }
        buffer = handle_comment(buffer);
		_strtok(buffer, "\n");
        brkdown_args(buffer);

    }
    free(buffer);
	if (exe)
		close(fd);
	return (0);
}