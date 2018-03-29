#include "p.h"
#define DELIMS " \t\r\n\a"
/**
 *parseline- parses through the input and tokenizes it.
 * @line: pointer that is holding the input from the command line.
 * Return: returns the tokenized input
 */
char **parseline(char *line)
{
	char *token, *copy_2;
	char **copy = NULL;/*where the tokenized input will be stored*/
	int i = 0, space;
	/*int buffersize = max_length;*/

	if (line == NULL)
		return (NULL);
	space = is_space(line);
	copy_2 = (_strdup(line));
	copy = malloc(sizeof(char *) * (space + 2));/*make space*/
	if (copy == NULL)
	{
		free(copy_2);
		return (NULL);
	}

	token = strtok(copy_2, DELIMS);/*strtok of the first input until the delim*/

	if (token ==  NULL)
	{
		free(copy_2);
		return (NULL);
	}
	look_line(token);
	token = strtok(copy_2, " ");
	while (token != NULL)
	{
		copy[i] = malloc(sizeof(char) * (_strlen(token) + 1));
		if (copy[i] == NULL)
		{
			free(copy_2);
			return (NULL);
		}
		_strcpy(copy[i], token);
		token = strtok(NULL, " ");
		++i;
	}
	copy[i] = NULL;
	free(copy_2);
	return (copy);
}

/**
 *look_line- compares the first token to exit and env
 * @token: the first token
 * Return: if its not exit or env it will return the token
 */
char *look_line(char *token)
{

	if (token == NULL)
		return (NULL);

	else if (_strcmp(token, "exit") == 0)/*string compares to see if its exit*/
	{
		fflush(stdin);
		free(token);
		_exit(0);
	}

	else if (_strcmp(token, "env") == 0)/*string compares to see if its env*/
	{
		free(token);
		print_env();/*runs print env func*/
	}
	return (token);
}

/**
 * is_space - skips the spaces and find the # of commands inputed
 * @line: input from the command line
 * Return: number of commands in the command line
 *
 */
int is_space(char *line)
{
	int f = 0/*flag*/, cmd = 0, c = 0;

	while (line[c])
	{
		if (line[c] != ' ')
		{
			f++;
			if ((line[c + 1] && f == ' ') || (line[c + 1] && f == '\0'))
			{
				cmd++;
				f = 0;
			}
		}
		c++;
	}
	return (cmd);
}
