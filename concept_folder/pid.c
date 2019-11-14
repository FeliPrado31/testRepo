#include <stdio.h>
#include <unistd.h>

/**
 * main - PID
 * gcc -Wall -Werror -pedantic pid.c -o mypid && ./mypid
 * Return: Always 0.
 */
int main(void)
{
    pid_t my_pid, parent_pid;

    my_pid = getpid();
    parent_pid = getppid();
    printf("PID: %u\n", my_pid);
    printf("PARENT: %u\n", parent_pid);
    return (0);
}