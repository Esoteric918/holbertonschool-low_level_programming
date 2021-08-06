#include "holberton.h"
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - concatenates two str
 *@s1: ptr to 1st string
 *@s2:  ptr to 2nd string
 *@n: number of chars to add from s2
 *Return: ptr cat
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j;
	char *cat;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)

		s2 = "";

	if (n > strlen(s2))

		cat = malloc(strlen(s1) + strlen(s2) + 1);
	else
		cat = malloc(strlen(s1) + n + 1);

	if (cat == NULL)

		return (NULL);
	for (i = 0; s1[i]; ++i)
		cat[i] = s1[i];

	for (j = 0; s2[j] && j < n; ++j, ++i)
		cat[i] = s2[j];
	cat[i] = 0;
	return (cat);
}
