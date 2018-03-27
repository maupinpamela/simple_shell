#include "testheader.h"
/**
 *gets_env- get the path
 * Return: return the posotion of int
 */
int gets_env(void)
{
	char *env_var;

	env_var = _getenv("PATH");

	if (_strcmp(env_var, "PATH") == 1)
	{
		env_var = _getenv("PATH");
		printf("%s", env_var);
	}
	return (0);
}
