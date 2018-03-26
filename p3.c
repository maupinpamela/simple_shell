#include "p.h"

char *takeline(void)
{
	size_t buffersize = 0;
	char *line;
	int check = 0;

	check = getline(&line, &buffersize, stdin);

	if (check == EOF)
	{
		_putchar('\n');
		free(line);
		exit (EXIT_SUCCESS);;
	}

	if (line == NULL)
	{
		return (NULL);
	}

	return (line);
}
