#include <stdio.h>
#include <unistd.h>

/**
 * gcc -Wall -Werror -pedantic print_all_arg.c -o print_all_arg 
 * ./print_all_arg this - is - text
 * source: https://www.geeksforgeeks.org/size_t-data-type-c-language/
 */

unsigned int _strlen(char *s)
{
	unsigned int counter = 0;
	
	while (s[counter] != '\0')
		++counter;

	return (counter);
}

int main(int argc, char **argv)
{
	unsigned int i, length;
	(void)argc;

	/*find all the arguments in the argv pointer */
	i = 0;
	length = 0;
	while (*(argv + i))
	{
		length = _strlen(argv[i]);
		write(1, argv[i], length);
		++i;
	}
	return (0);
}