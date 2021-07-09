#include "holberton.h"
/**
 * cap_string - cap every word
 *@str: pointer to string to convert
 *
 *Return: str
 */
char *cap_string(char *str)
{
	int i;

	for (i=0; str[i]; i++)
	{
		if (i == 0)
		{
			if ((str[i]>= 'a' && str[i] <= 'z'))
				str[i]=str[i] - 32;
			continue;
		}
		if (str[i]==' ')
		{
			if(str[i + 1]>= 'a' && str[i + 1]<='z')
			{
				str[i + 1]=str[i + 1] - 32;
				continue;
			}
		}
	}
	return (str);
}
