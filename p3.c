#include "p.h"

char *takeline(void)
{
	size_t buffersize = 0;
	char *line;

	getline(&line, &buffersize, stdin);
	return (line);
}
