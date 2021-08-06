#include "lists.h"

/**
 * print_list - prints  nodes stored
 * @h: pointer to node list
 * Return: the number of nodes
 */
size_t list_len(const list_t *h)
{
	unsigned int ncount = 0;

	while (h)
	{
		ncount++;
		h = h->next;
	}
	return (ncount);
}
