#include "holberton.h"
#include <stdio.h>
/**
 *print_array - pointer at array
*@a: pointer
*@n: elements of an array of integers
 *Return: void
 */
void print_array(int *a, int n)
{
	int k;

	for (k = 0; k < n; k++)
	{
		if (k != n - 1)
			printf("%d, ", a[k]);
		else
			printf("%d\n", a[k]);
	}
	if (k >= 0)
		printf("%d\n", a[k]);
}
