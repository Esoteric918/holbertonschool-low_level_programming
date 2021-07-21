#include "holberton.h"
#include <stdlib.h>
#include <string.h>
/**
 * str_concat - concatenates two strings
 *@s1: string to be pointed in memory
 *@s2: string string to be be canted
 *
 *Return: Ptr or NULL if failure
 *
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int size = 0;
	char *ptr;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	ptr = malloc(sizeof(char) * (strlen(s1) + strlen(s2) + 1));

	if (ptr == NULL)
	{
		return (NULL);
	}
	for (size = 0; *s1; size++, s1++)
	{
		ptr[size] = *s1;
	}
	for (; *s2; size++, s2++)
	{
		ptr[size] = *s2;
	}
	ptr[size + 1] = '\0';
	return (ptr);
}
