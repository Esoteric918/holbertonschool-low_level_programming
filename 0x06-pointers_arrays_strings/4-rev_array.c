#include "holberton.h"
/**
 * reverse_array - rev the order of an array
 *@a: pointer to array
 *@n: len of array
 *Return: 0
 */
void reverse_array(int *a, int n)
{
	int i;
	int temp;

	for (i = 0; i < n; i++)
	{
		temp = a[i];
		a[i] = a[n - 1];
		a[n - 1] = temp;
		--n;
	}
}
