#include "testheader.h"
void commandline(char cmd[], char *par[])
{
	size_t line = 1024;
	int counter = 0, i = 0, j = 0;
	char *array[100], *pch;
	char *buff;

	buff = malloc(sizeof(char) * line);
	if (array == NULL)
	{
		printf("ARRAY FAIL");
	}

	for(;;)
	{
		int linecommand = getline(&buff, &line, stdin);
		counter++;

		if (linecommand == '\n')
			break;
		if (counter == 1)
			return;
		pch = strtok (pch, "\n");

		while (pch != NULL)
		{
			array[i] = _strdup(pch);
			i++;
			pch = strtok(NULL, "\n");
		}
		_strcpy(cmd, array[0]);

		for (j = 0; j < i; j++)
			par[j] = array[j];
		par[i] = '\0';
	}
}
