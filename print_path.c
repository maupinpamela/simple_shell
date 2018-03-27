#include "p.h"
/**
 *print_path- sets the PATH variable and prints the path
 * @cmd: the command that was entered in the input line
 * Return: a concatinated string
 */
char **print_path(char *cmd)
{
	char *token = NULL, *path = NULL, *ret = 0, *hold = NULL;
	char **newstr = NULL;
	char *delim = "=:\n";
	int counter = 0, colon = 0, j = 0;

	path = (_getenv("PATH"));

	while (path[colon])
	{
		if (path == delim)
			counter++;
	}

	token = malloc(sizeof(counter + 1) * (*token));
	if (token == NULL)
		return (NULL);

	token = strtok(cmd, delim);
	if (token == NULL)
		return (NULL);
	colon = 0;

	while (counter > colon)
	{
		ret = str_concat(hold, "/");
		ret = str_concat(hold, cmd);
		newstr[j] = ret;
		ret = strtok(NULL, delim);
	}
	free(path);
	newstr = '\0';
	return (newstr);
}
