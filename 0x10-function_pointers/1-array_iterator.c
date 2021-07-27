#include "function_pointers.h"
/**
 * array_iterator - given as a parameter on each ele of an arr
 *@array: array that of numbers that will be pass function
 *@size:  size of the array
 *@action: function pointer
 *
 *Returns: int
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && size && action)
	{
		for (i = 0; i < size; ++i)
			action(array[i]);
	}
}
