#include "p.h"
/**
 *make_path- sets the PATH variable and prints the path
 * Return: a concatinated string
 */
path_t *make_path(void)
{
	char *token = NULL, *path = NULL;
	path_t *head, *temp;

	path = _strdup(_getenv("PATH"));
	if (path == NULL)
		return (NULL);
	token = strtok(path, ":");
	if (token == NULL)
		return (NULL);

	temp = malloc(sizeof(path_t));
	if (temp == NULL)
		return (NULL);
	head = temp;
	/*loop*/
	while (token != NULL)
	{
		temp->s = _strdup(token);
		if (temp->s == NULL)/*copt dir*/
			return (NULL);
		token = strtok(NULL, ":");
		if (token != NULL)
		{
			/*malloc only we have another token*/
			temp->next = (malloc(sizeof(path_t)));
			temp = temp->next;/*move to the next node*/
		}
		else
			temp->next = NULL;
	}
	free(path);
	return (head);
}

/**
 *check_path- concatinates the strtok from above
 * @head: start of the linked list
 * @cmd: the command that was passed in
 * Return: return the executed command
 */
char *check_path(path_t *head, char *cmd)
{
	/*concats*/
	path_t *temp;
	struct stat st;
	char *copy;

	temp = head;
	while (temp)
	{
		copy = _strcat(temp->s, "/");
		copy = _strcat(copy, cmd);

		if (stat(copy, &st) == 0)
			return (copy);

		free(copy);
		temp = temp->next;
	}
	return (NULL);
}
