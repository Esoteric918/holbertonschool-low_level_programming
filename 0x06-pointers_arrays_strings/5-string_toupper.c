#include "holberton.h"
/**
 * string_toupper - make str caps
 *@len: points to array
 *
 *Return: 0
 */
char *string_toupper(char *len)
{
	int i;

	for (i = 0; len[i] != '\0'; ++i)
	{
		if (len[i] >= 'a' && len[i] <= 'z')
			len[i] = len[i] - 32;
	}
	return (len);
}
