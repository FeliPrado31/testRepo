#ifndef _SIMPLE_SHELL
#define _SIMPLE_SHELL

#include <stdio.h>
#include <sys/types.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <string.h>
#include <errno.h>

char **array_to_strok(char *str);
char *_strncpy(char *dest, char *src, int n);

#endif