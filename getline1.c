#include "p.h"
/**
 *takeline- gets the input from the command line checks to see if its EOF
 * Return: returns the line pointer to the next function
 */
char *takeline(void)
{
	size_t buffersize = 0;
	char *line;
	int check;



	check = getline(&line, &buffersize, stdin);/*gets input from command line*/

	if (check == EOF)/*checks to see if the input is EOF*/
	{
		_putchar('\n');
		free(line);
		exit(EXIT_SUCCESS);
	}
	if (line == 0)/*if line is empty it will return NULL*/
	{
		return (NULL);
	}
	return (line);
}
