#include "holberton.h"

int main(__attribute__((unused)) int ac, char **av)
{
	int words = 0;
	size_t buffersize = 32;
	char *buffer;


	buffer = (char *)malloc(buffersize * sizeof(char));
	if (buffer == NULL)
	{
		perror("Error try again");
		exit(1);
	}

	while (av[words] != NULL)
	{
		printf("$ ");
		while (getline (&buffer, &buffersize, stdin) != -1)
		{
			printf("%s", buffer);
			words++;
			printf("$ ");
		}
	}
	free(buffer);
	return (0);
}
