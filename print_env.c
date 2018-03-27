#include "p.h"
/**
 *print_env- writes the env
 * Return: nothing
 */
int print_env(void)
{
	int command = 0;

	while (environ[command] != NULL)
	{
		write(STDOUT_FILENO, environ[command], _strlen(environ[command]));
		_putchar('\n');
		command++;
	}
	return (0);
}
