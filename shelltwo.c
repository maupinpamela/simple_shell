#include "testheader.h"

int main()
{
	char commands[100], lines[100], *param[20];
	char *envp[] = { (char*) "PATH=/bin", 0};

	if (envp == NULL)
	{
		printf("ENVP FAILED");
		exit(1);
	}
	if (param == NULL)
	{
		printf("PARAM NULL");
		exit(1);
	}
	while (1)
	{
		promptline();
		commandline(commands, param);

		if ( fork() != 0)
			wait(NULL);
		else
		{
			_strcpy(commands, "/bin/");
			_strcat(commands, lines);
			execve(commands, param, envp);
		}
		if (_strcmp(commands, "exit") == 0)
			break;
	}
	return (0);
}
