#include "testheader.h"

char *promptline(void)
{
	char *buffer;
	size_t buffersize = max_length;
	int length = 0, getcmd;

	buffer = malloc(sizeof(char) * buffersize);
	if (buffer == NULL)
	{
		perror ("CLEAR FAIL");
		/*exit(EXIT_FAILURE);*/
	}
	while (1)
	{
		getcmd = getline(&buffer, &buffersize, stdin);
		if (getcmd == EOF || getcmd == '\n')
			exit(EXIT_SUCCESS);
		else
			if (getcmd == -1)
			{
				free(buffer);
				exit(EXIT_FAILURE);
			}
		length = _strlen(buffer);
		buffer[length + 1] = '\0';
	}
	free(buffer);
	return (buffer);

}
