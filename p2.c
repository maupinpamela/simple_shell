#include "p.h"

void beginning(void)
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
		/*status = exline(args);*/

		free(cmd);
		free(args);
	}
}
