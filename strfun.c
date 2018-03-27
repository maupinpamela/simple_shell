#include "testheader.h"
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
