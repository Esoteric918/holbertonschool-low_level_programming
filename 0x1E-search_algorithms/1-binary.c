#include "search_algos.h"

/**
 * binary_search - searchs an array for give value
 * @array: - array to be search
 * @size: - the size of the array
 * @value: - the value to be found
 *
 * Return: -1 if value not found
 */
int binary_search(int *array, size_t size, int value)
{
	unsigned int i, start, mid, end;

	if (!array)
		return (-1);

	start = 0;
	end = size - 1;

	while (start <= end)
	{
		printf("Searching in array: ");
		for (i = start; i < end; ++i)
		{
			printf("%i, ", array[i]);
		}
		printf("%i\n", array[i]);

		mid = (start + end) / 2;
		if (value > array[mid])
			start = mid + 1;
		else if (value < array[mid])
			end = mid - 1;
		else
			return (mid);
	}
	return (-1);

}
