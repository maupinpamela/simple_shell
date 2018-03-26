#include "p.h"
char **parseline(char *line)
{
	char *token;
	char *delims = " \n";
	char **copy = NULL;
	int i = 0;
	int buffersize = max_length;

	copy = malloc(sizeof(char*) * buffersize);
	if (copy == NULL)
		return (NULL);

	token = strtok(line, delims);

	look_line(token);

	if (token == NULL)
		return (NULL);

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

char *look_line(char *token)
{

	if (_strcmp(token, "exit") == 0)
 		 exit(1);

	if(_strcmp(token, "env") == 0)
		print_env();

	return (token);
}
