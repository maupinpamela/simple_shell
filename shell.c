#include "holberton.h"

int main(__attribute__((unused)) int argc, const char *args[])
{
	int counter;
	pid_t getp = fork();
	int space = 0;
	char promptl[] = "\033[$\033[2m>\033[0m ";

	while (1)
	{
		write(1, promptl, space);/*print command prompt*/
		/*parse_cmds(buffer, &counter, args);*/

		if (counter == 0 || strtok(args[0], "") == 0)
		{
			continue;
		}
		if (_strcmp(args[0], "exit") == 0)
		{
			exit(0);
		}
		if (getp == 0)
		{
			if (execve(args[0], args) < 0)
				perror ("Did not work");
		}
		else
			wait();
	}
}
