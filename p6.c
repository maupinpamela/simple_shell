#include "p.h"

int exline(char **args)
{
	int counter;

	if (args[counter] == NULL)
		return (1);
/*	for (counter = 0; counter < bi_return(); counter++)
	{
		if (strcmp(args[0], bi_str[counter]) == 0)
			return (*bi[counter])(args);
			return (1);
	}
*/
	return beginning(args);
}
