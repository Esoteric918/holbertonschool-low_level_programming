#include "holberton.h"
/**
 * main - Print Holberton
 * Return: 0
 */
int main(void)
{
	char string[] = "Holberton";
		int i = 0;
	while (string[i])
	{
		_putchar(string[i]);
		++i;
	}
	_putchar('\n');
	return (0);
}
