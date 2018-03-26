#include "p.h"

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
		forks(args);

		free(cmd);
		free(args);
	}
	return (0);
}
