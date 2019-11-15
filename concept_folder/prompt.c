#include "holberton.h"

/**
 * gcc -Wall -Werror -pedantic prompt.c -o prompt && ./prompt
 * source: https://c-for-dummies.com/blog/?p=1112
 */

int main()
{
    char *buffer = NULL;
    char **commands;
    size_t bufsize = 32;
    size_t characters;
    char *dollar = "$ ";

    write(1, dollar, 2);
    while((characters = getline(&buffer, &bufsize, stdin)) != EOF)
    {
        commands = array_to_strok(buffer);
        write(1, dollar, 2);
    }
    free(buffer);
    return(0);
}