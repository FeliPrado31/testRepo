#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
/**
 * gcc -Wall -Werror -pedantic prompt.c -o prompt && ./prompt
 * source: https://c-for-dummies.com/blog/?p=1112
 */

int main()
{
    char *buffer = NULL;
    size_t bufsize = 32;
    size_t characters;
    char *dollar = "$ ";

    write(1, dollar, 2);
    while((characters = getline(&buffer, &bufsize, stdin)) != EOF)
    {
        write(1, buffer, characters);
        write(1, dollar, 2);
    }
    free(buffer);
    return(0);
}