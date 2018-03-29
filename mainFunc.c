#include "p.h"
/**
 *main- main function prints the $ and call the rest of the programs
 * Return: returns an int
 */

int main(void)
{
	char *cmd;
	char **args;
	char *dollas = "$ ";
	int counter = 0;

	while (1)
	{
		if (isatty(STDIN_FILENO) == 1)
			write(STDOUT_FILENO, dollas, 2);

		cmd = takeline();
		if (cmd == NULL)
			return (-1);
		args = parseline(cmd);

		if (args == NULL)
			continue;

		if (args != NULL)
		{
			forks(args);
		}
		if (cmd)
			free(cmd);
		if (args)
		{
			while (args[counter])
			{
				if (args[counter])
					free(args[counter]);
				counter++;
			}
			free(args);
		}
	}
	return (0);
}

/**
 * free_list - free the list
 * @head: list_t pointer
 * Return: Always void.
 */
void free_list(path_t *head)
{
	path_t *ptrtemp;

	while (head != NULL)
	{
		ptrtemp = head;
		head = head->next;
		free(ptrtemp->s);
		free(ptrtemp);
	}
}
