#include "holberton.h"
/**
 * _getenv - function that gets an environment variable
 *
 * @name: name of variable
 *
 * Return: enviroment or Null
 */

char *_getenv(const char *name)
{

	int i, length;


	length = _strlen(name);
	i = 0;

	if (name == NULL)
	{
		return (NULL);
	}



	while (environ[i] != NULL)
	{
		if (_strncmp(name, environ[i], length) == 0)
		{
			return (environ[i]);

		}
		i++;
	}
	return (NULL);
}

