#include "p.h"
/**
 *takeline- gets the input from the command line checks to see if its EOF
 * Return: returns the line pointer to the next function
 */
char *takeline(void)
{
	size_t buffersize = 0;
	char *line = NULL, *ex = "exit";
	int check;



	check = getline(&line, &buffersize, stdin);/*gets input from command line*/
	if (check == 0)
		free(line);

	if (check == EOF)/*checks to see if the input is EOF*/
	{
		free(line);
		exit(EXIT_SUCCESS);
	}
	if (_strcmp(line, ex) == 0)
	{
		free(line);
		exit(0);
	}
	if (line == 0)/*if line is empty it will return NULL*/
	{
		return (NULL);
	}
	return (line);
}
