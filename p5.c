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
		getp = wait(&status);
	}
	return (0);
}
