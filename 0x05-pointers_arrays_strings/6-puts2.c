#include "holberton.h"
/**
 *puts2 - print every other char
 *@str:
 *Return: void
 */
void puts2(char *str)
{
	int k = 0;
	int i;
	
	while (str[k])
	{
		++k;
	}
	for( i = 0; i <= k ; i+=2)
	{
		_putchar(str[i]);
	}
}
