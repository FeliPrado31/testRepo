#include "holberton.h"

/**
 *
 */
unsigned int *find_command(char *str)
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
    char *string;
    string = strtok(str, " ");
    return (0);
}