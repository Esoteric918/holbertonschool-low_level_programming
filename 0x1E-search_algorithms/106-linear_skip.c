#include "search_algos.h"
/**
 * linear_skip - searchs a sorted skip-list for a value
 *
 * @list: list to be searched
 * @value: value to be found
 * @return skiplist_t*
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *runner = list;

	if (!list)
		return (NULL);

    while (list->n < value && list->express)
    {
        runner =list;
        list = list->express;
        printf("Value checked at index [%lu] = [%d]\n", list->index, list->n);
    }
    if (value <= list->n)

        printf("Value found between indexes [%lu] and [%lu]\n", runner->index, list->index)
    else
    {

    }



}
