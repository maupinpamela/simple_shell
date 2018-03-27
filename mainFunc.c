#include "p.h"
/**
 *main- main function prints the $ and call the rest of the programs
 * Return: returns an int
 */


int main(void)
{
	char *cmd;
	char **args;
	char *dollas = "$ ";

	while (1)
	{
		if (isatty(STDIN_FILENO))
		{
			write(STDOUT_FILENO, dollas, 2);
		}

		cmd = takeline();
		args = parseline(cmd);
		print_path(cmd);
		forks(args);

		free(cmd);
		free(args);
	}
	return (0);
}
