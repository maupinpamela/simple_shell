#include "p.h"

int forks(char **args)
{
	pid_t getp;
	int status;

	getp = fork();
	if (getp == 0)
	{
		execve(args[0], args, NULL);

		if (getp < 0)
			perror ("no child");
	}
	else
	{
		wait(&status);
	}
	return (1);
}
