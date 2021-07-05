#include "holberton.h"
/**
 *swap_int - swap one int val for another
 *@p: int to be swapped from 
 *@d: int to be swapped to 
 *Return: void
 */
void swap_int(int *p, int *d)
{
	int temp;

	temp =* p;
	*p    = *d;
	*d    = temp;
}
