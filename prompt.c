#include "holberton.h"

int main(__attribute__((unused)) int ac, char **av)
{
	int words = 0;
	size_t buffersize = 32, space = 0;
	char *buffer;


	buffer = (char *)malloc(buffersize * sizeof(char));
	if (buffer == NULL)
	{
		perror("Error try again");
		exit(1);
	}

	while (av[words] != NULL)
	{
		_putchar('$');
		_putchar(' ');

		while (getline (&buffer, &buffersize, stdin) != -1)
		{
			write(1, buffer, space);
			words++;
			_putchar('$');
			_putchar(' ');
		}

	}
	free(buffer);
	return (0);
}
