#include "p.h"

void beginning(void)
{
	char *cmd;
	int status;
	char **args;

	while (1)
	{
		printf("$ ");
		cmd = takeline();
		args = parseline(cmd);
		forks(args);
		/*status = exline(args);*/

		free(cmd);
		free(args);
	}
	while (status);
}
