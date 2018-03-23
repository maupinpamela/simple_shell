#include "p.h"
char **parseline(char *line)
{
	int buffersize = max_length;
	int pos = 0, i = 0;
	char **copy = NULL;
	char *token;
	char *delims = " \n";

	copy = malloc(sizeof(char*) * buffersize);

	if (token == NULL)
		perror ("Can't allocate");
	token = strtok(line, delims);

	if (token == NULL)
		return (0);
	copy[i] = token;
	i++;

	while (token != NULL)
	{
		token = strtok(NULL, delims);
		copy[i] = token;
		i++;
	}

	return (copy);
}
