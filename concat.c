#include "p.h"
/**
 *str_concat- main for iterating through an array
 * @s1: int pointer
 * @s2: int size
 * Return: returns the concatinated string
 */
char *str_concat(char *s1, char *s2)
{
	char *nstr; /*new string at new mem*/
	int len;/*total mem alloc*/
	int i, j, k;/*indexes for strlen of s1, s2 and index*/

/*treat NULL as empty strings*/
	if (s1 == '\0')
		s1 = "";
	if (s2 == '\0')
		s2 = "";

	for (i = 0; s1[i]; i++)/*strlen of s1*/
		;

	for (j = 0; s2[j]; j++)/*strlen of s2*/
		;

	len = i + j + 1;/*adding strlens of s1 and s2*/

	nstr = malloc(len * sizeof(char));/*mem size of s1 plus s2 plus 1*/

	if (nstr == '\0')/*if malloc fails*/
		return (NULL);

	for (k = 0; k < len; k++)
	{
		if (k < i)
			nstr[k] = s1[k];/*copies s1*/
		else
			nstr[k] = s2[k - i];/*copies s2*/
	}
	free(s1);

	return (nstr);
}
