#include "holberton.h"
/**
 *
 *
 *
 *
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
