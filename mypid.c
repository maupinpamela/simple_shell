#include "holberton.h"

void getpid(char **argv)
{
	/*make a child*/
	pid_t getp = fork();
	int status;

	if (getp < 0)
	{
		perror("Error: Forking child process");
		exit(1);
	}
	else if (getp == 0)
	{
		execve(*argv, agrv, NULL);
	}
	else
	{
		wait(&status);
	}
}
