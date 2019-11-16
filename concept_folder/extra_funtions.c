#include "holberton.h"
#include <string.h>

/**
 *
 */
unsigned int find_command_lenght(char *str)
{
    unsigned int commands, flag, i;
    commands = 0;
    flag = 0;
    i = 0;
    while (str[i] != '\0')
    {
        if (str[i] != ' ')
            flag++;
        if ((flag && str[i + 1] == ' ') || (flag && str[i + 1] == '\0'))
        {
            ++commands;
            flag = 0;
        }
        i++;
    }
    return (commands);
}
char **array_to_strok(char *str)
{
    unsigned int lenght = 0, i = 0;
    char *token;
    lenght = find_command_lenght(str);
    token = strtok(str, " ");
    while (!token)
    {
        token = strtok(NULL, " ");
        ++i;
    }
    return (0);
}