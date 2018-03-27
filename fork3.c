#include "p.h"
/**
 *forks- creates the child process and executes the command
 * @args: the commands from the input line
 * Return: return the executed command
 */
int forks(char **args)
{
	pid_t getp;
	int status;

	getp = fork();/*creates the fork*/

	if (getp == 0)
	{
		execve(args[0], args, NULL);/*executes the command*/

		if (getp < 0)
			perror("no child");
	}


	else
	{
		getp = wait(&status);/*or it just waits*/
	}
	return (0);
}
