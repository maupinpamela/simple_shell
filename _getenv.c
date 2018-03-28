#include "p.h"
/**
 *_getenv- writes the env
 * @name: the name of the command passed in
 * Return: the name without the =
 */

char *_getenv(char *name)
{

	int i, j;
	char *match = NULL;
	char *res;


	i = 0;

	if (name == NULL)
	{
		return (NULL);
	}



	while (environ[i] != NULL)
	{
		j = 0;
		while (name[j] != '\0')
		{
			if (name[j] != environ[i][j])
				break;
			if (name[j + 1] == '\0' && environ[i][j + 1] == '=')
				match = _strdup(environ[i]);
			j++;
		}
		if (match)
			break;
		i++;
	}
	strtok(match, "=");
	res = strtok(NULL, "=");
	return (res);
}
