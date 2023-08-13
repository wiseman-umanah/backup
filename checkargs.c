#include "main.h"

int checkargs(int arg, char **ac, int *exe)
{
    int temp = STDIN_FILENO;

    char *error = "Error: more than one argument\n";
    if (arg > 2)
    {
        write(STDOUT_FILENO, error, strlen(error));
        exit(98);
    }
	/*Handle executable files if any e.g "./a.out /bin/ls" */
    if (arg == 2)
	{
		temp = open(ac[1], O_RDONLY);
        *exe = 1;
	}
	if (temp == -1)
	{
		perror(ac[0]);
		exit(1);
	}

	return (temp);
}