#include "holberton.h"
#include <stdlib.h>
#include <string.h>
/**
 * _strdup - return a dup of a string
 *@str: string to be dup and returned
 *
 *Return: str or NULL if not enough mem
 */
char *_strdup(char *str)
{
	char *dup;
	int i;

	if (str == NULL)
	{
		return (NULL);
	}
	dup = malloc(sizeof(char) *(strlen(str) + 1));

	if (dup == NULL)
	{
		free(dup);
		return (NULL);
	}
	for (i = 0; str[i]; i++)
	{
		dup[i] = str[i];
	}
	return (dup);
}
