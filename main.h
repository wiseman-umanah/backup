#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stddef.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <sys/wait.h>

int checkargs(int arg, char **ac, int *exe);
int brkdown_args(char *buffer);
int execute_file(char **buffer, int buff_size);
char *handle_comment(char *str_input);
int exit_com (char **buffer);
int isdelimiter(char c, char *delimiter);
char *_strtok(char *str, char *delimiter);

#endif /*MAIN_H*/