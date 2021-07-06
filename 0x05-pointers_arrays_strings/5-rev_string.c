#include "holberton.h"


/**
 * rev_string - prints a string, in reverse
 * @s: string to be reversed
 *
 * Return: void
 */
void rev_string(char *s)
{
	int len, j;

	char *g, *f, temp;
j = 0;
len = 0;
g = s;
f = s;

while (s[j] != '\0')
{
	++len;
	++j;
	++f;
}
--f;
for (j = 0; j < len / 2; j++)
{
	temp = *f;
	*f = *g;
	*g = temp;
	g++;
	f--;
}
}
