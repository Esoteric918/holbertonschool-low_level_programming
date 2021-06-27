#include <stdio.h>

/**
 * main - start of program
 *
 * Return: 0
 */
#include <stdio.h>

int main(void)
{
	char p;
	int n;

	for (n = 0 ; n < 10 ; n++)

		putchar(n + '0');

	for (p = 'a' ; p <= 'f' ; p++)

		putchar (p);

	putchar('\n');

	return (0);

}
