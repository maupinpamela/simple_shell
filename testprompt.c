#include "testheader.h"
void promptline()
{
	static int promline = 1;
	char *buffer;
	size_t buffersize = 1024;
	int space = 0;

	buffer = malloc(sizeof(char) * buffersize);
	if (buffer == 0)
		printf ("CLEAR FAIL");

	if (promline)
	{
		_putchar('$');
		_putchar(' ');
		write(1, &buffer, space);
		/*promline = 0;*/
	}
	free(buffer);

}
