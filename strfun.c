#include "p.h"
/**
 * _strdup - returns a pointer to a duplicated
 * string
 * @str: string to be duplicated
 * Return: pointer to duplicated string if "success",
 *
 */

char *_strdup(char *str)
{

	char *dstr;


	if (str == NULL)
		return (NULL);

	dstr = malloc(_strlen(str) + 1);

	if (dstr != NULL)
		_strcpy(dstr, str);
	else
		return (NULL);

	return (dstr);
}

/**
 * _strlen - finds the length of a string
 * @s: the string
 * Return: The string length
 */

int _strlen(char *s)
{

	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	return (len);
}


/**
 * _strcpy - copies a string
 * @dest: copy of string
 * @src: string to be copied
 *
 * Return: the string copy
 */

char *_strcpy(char *dest, char *src)
{

	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];


	dest[i] = src[i];

	return (dest);
}

/**
 * _strcmp - compare two strings
 *
 * @s1: first string
 * @s2: second string
 *
 * Return: compared strings
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] == s2[i])
	{
		if (s1[i] == '\0' && s2[i] == '\0')
			break;

		i++;

	}
	return (s1[i] - s2[i]);


}





/**
 * _strcat - concatenates two strings neither of which has been malloc'd
 * @dest: original string
 * @src: string to be added
 *
 * Return: concatenated string if "success"
 *
 */

char *_strcat(char *dest, char *src)
{
	int len, i;


	if (dest == NULL)
		dest = "";
	if (src == NULL)
		src = "";

	for (i = 0; dest[i]; i++)
		;

	len = i ;/*adding strlen of des*/


	for (i = 0; src[i]; i++)
	{
		dest[len + i] = src[i];/*appends src*/

	}
	dest[len + i] = '\0';

	return (dest);
}


char *str_concat(char *s1, char *s2)
{
	char *nstr; /*new string at new mem*/
	int len;/*total mem alloc*/
	int i, j, k;/*indexes for strlen of s1, s2 and index*/

	
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i]; i++)/*strlen of s1*/
		;

	for (j = 0; s2[j]; j++)/*strlen of s2*/
		;

	len = i + j + 1;/*adding strlens of s1 and s2*/

	nstr = malloc(len * sizeof(char));/*mem size of s1 plus s2 plus 1*/

	if (nstr == NULL)/*if malloc fails*/
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
