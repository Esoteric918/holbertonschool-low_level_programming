#include "holberton.h"
#include <string.h>
/**
 * cap_string - cap every word
 *@str: pointer to string to convert
 *
 *Return: str
 */
char *cap_string(char *str)
{
	int i;
	char *inval = "\n\t ,.?(){}";
	char chkr[2];
	int word;

	for (i = 0; str[i]; i++)
	{
		if (word == 0)
		{
			if ((str[i] >= 'a' && str[i] <= 'z'))
				str[i] = str[i] - 32;
			word = 1;
		}
		chkr[0] = str[i];
		chkr[1] = '\0';
		if (strstr(inval, chkr) != 0)
			word = 0;
	}
		return (str);
}
