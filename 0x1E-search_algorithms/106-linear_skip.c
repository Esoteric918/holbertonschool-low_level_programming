#include "search_algos.h"
/**
 * linear_skip - searchs a sorted skip-list for a value
 *
 * @list: list to be searched
 * @value: value to be found
 * Return: NULL
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *runner = list;

	if (!list)
		return (NULL);

	while (list->n < value && list->express)
	{
		runner = list;
		list = list->express;
		printf("Value checked at index [%lu] = [%d]\n", list->index, list->n);
	}
	if (value <= list->n)

		printf("Value found between indexes [%lu] and [%lu]\n",
				runner->index, list->index);
	else
	{
		runner = runner->express;
		while (list->next)
			list = list->next;
		printf("Value found between indexes [%lu] and [%lu]\n",
				runner->index, list->index);
	}
	while (runner)
	{
		printf("Value checked at index [%lu] = [%d]\n", runner->index, runner->n);
		if (runner->n == value)
			return (runner);
		runner = runner->next;
	}
	return (NULL);
}

