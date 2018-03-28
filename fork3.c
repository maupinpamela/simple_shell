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
	char *ret;
	path_t *mainglo = make_path();

	getp = fork();/*creates the fork*/

	if (getp == 0)
	{
		if (args[0][0] == '/')
			execve(args[0], args, environ);/*executes the command*/
		else
		{
			ret = check_path(mainglo, args[0]);
			if (ret == NULL)
				perror("Doesn't Exist");

			if (execve(ret, args, environ) < 0)
				perror("Didn't Run");
		}

		if (getp < 0)
			perror("no child");
	}

	else
	{
		getp = wait(&status);/*or it just waits*/
	}
	return (0);
}
