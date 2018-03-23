#include "p.h"
char **parseline(char *line)
{
	char *token;
	char *delims = " \n";
	char **copy = NULL;
	int i = 0;
	int buffersize = max_length;

	copy = malloc(sizeof(char*) * buffersize);

	token = strtok(line, delims);

	if (token == NULL)
		return (0);
	copy[i] = token;
	i++;

	if (token == NULL)
		perror ("Can't allocate");

	while (token != NULL)
	{
		token = strtok(NULL, delims);
		copy[i] = token;
		i++;
	}

	return (copy);
}
