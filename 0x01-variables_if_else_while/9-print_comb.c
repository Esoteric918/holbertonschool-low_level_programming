#include <stdio.h>
/**
 * main - Use putchar to show 1, 2, 3,...
 *
 * Return: 0
 */
int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		putchar (n + '0');
		if (n == 9)
			break;
		putchar (',');
		putchar (' ');
	}
	putchar ('\n');
	return (0);
}
