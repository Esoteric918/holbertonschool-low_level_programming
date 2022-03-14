#include "search_algos.h"
/**
 * linear_search - a function that searches for a value in an array of integers
 * using the Linear search algorithm
 * @array: the array of integers
 * @size: the size of the array
 * @value: the value to search for
 * Return: index where is found.
 */

int linear_search(int *array, size_t size, int value)
{
    unsigned int i;
    for (i = 0; i < size; i++)
    {
        printf("Value checked array[%i] = [%i]\n", i, array[i]);
        if (array[i] == value)
            return i;
    }
    return -1;
}
