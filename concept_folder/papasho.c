#include "holberton.h"
int main(void)
{
	pid_t kid;
	int i, status;
	size_t bufsize = 16;
	char *token, *buffer, *argv[16];
	char s[] = " \n";

	buffer = (char *)malloc(bufsize * sizeof(char));
	if( buffer == NULL)
	{
		perror("Unable to allocate buffer");
		return (0);
	}
	while(1)
	{
		printf("#cisfun$ ");
		if (getline(&buffer, &bufsize, stdin) == -1)
			break;
		kid = fork();
		if (kid == 0)
		{
			token = strtok(buffer, s);
			for (i = 0; i < bufsize && token != NULL; i++)
		{
			argv[i] = token;
			token = strtok(NULL, s);
		}
		argv[i] = NULL;
		if (execve(argv[0], argv, NULL))
			perror("./shell");
		}
		if (kid > 0)
			wait(&status);
	}
	putchar('\n');
	free(buffer);
	return(0);
}