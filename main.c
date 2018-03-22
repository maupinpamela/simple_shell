#include "testheader.h"

int main(int argc, char *argv[])
{
	char *cmd;
	char line[max_length];
	char *v = line;
	size_t c = max_length;
	(void)argc;
	(void)argv;

	while (1)
	{
		printf("$ ");
		if (getline (&v, &c, stdin) == -1)
			break;

		if ((cmd = strtok(line, delims)))
		{


			if (strcmp(cmd, "exit") == 0)
			{
				break;
			}
			else
			{
				system(line);
			}
		}
	}

	return 0;
}
