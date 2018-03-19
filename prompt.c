#include "holberton.h"

int main(__attribute__((unused)) int argc, char **argv)
{
	int words = 0;
	size_t buffersize = 1024, space = 0;
	char *buffer;

	buffer = (char *)malloc(buffersize * sizeof(char));
	if (buffer == NULL)
	{
		return (0);
	}
	if (argv[words] == '\0')
	{
		perror("ERROR TRY AGAIN");
		words = 0;
		exit(98);
		_putchar('\n');
	}
	while (argv[words] != NULL)
	{
		_putchar('$');
		_putchar(' ');
		while (getline (&buffer, &buffersize, stdin) != -1)
		{
			write(1, buffer, space);
			execute_cmd();
			_putchar('$');
			_putchar(' ');
			words++;
		}
	}
	free(buffer);
	return (0);
}
