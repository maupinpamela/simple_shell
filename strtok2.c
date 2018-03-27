#include "p.h"
/**
 *parseline- parses through the input and tokenizes it.
 * @line: pointer that is holding the input from the command line.
 * Return: returns the tokenized input
 */
char **parseline(char *line)
{
	char *token;
	char *delims = "\n";
	char **copy = NULL;/*where the tokenized input will be stored*/
	int i = 0;
	int buffersize = max_length;

	copy = malloc(sizeof(char *) * buffersize);/*make space*/
	if (copy == NULL)
		return (NULL);

	token = strtok(line, delims);/*strtok of the first input until the delim*/

	look_line(token);/*checks to see if its exit or env*/

	if (token == NULL)
		return (NULL);

	copy[i] = token;/*saves the first token into copy*/
	i++;

	if (token == NULL)
		perror("Can't allocate");
	while (token != NULL)
	{
		token = strtok(NULL, delims);/*moves onto the next command if any*/
		copy[i] = token;
		i++;
	}
	return (copy);
}


/**
 *look_line- compares the first token to exit and env
 * @token: the first token
 * Return: if its not exit or env it will return the token
 */
char *look_line(char *token)
{

	if (_strcmp(token, "exit") == 0)/*string compares to see if its exit*/
		exit(1);

	if (_strcmp(token, "env") == 0)/*string compares to see if its env*/
		print_env();/*runs print env func*/

	return (token);
}
