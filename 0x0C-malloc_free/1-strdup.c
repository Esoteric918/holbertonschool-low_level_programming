#include "holberton.h"
#include <stdlib.h>
#include <string.h>
/**
 * _strdup -
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
	dup = malloc(sizeof(*str));

	if (dup == NULL)
	{
		free (dup);
		return (NULL);
	}
	for(i = 0; str[i]; i++)
	{
		dup[i] = str[i];
	}
	return (dup);
}
