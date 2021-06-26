#include <stdio.h>
/**
 * main - Use putchar to show alphabet
 *
 * Return: 0
 */
int main(void)
{
	char ch;

	for (ch = 'z' ; ch >= 'a' ; ch--)
	{
		putchar (ch);
	}
	putchar ('\n');
	return (0);
}
