#include "lists.h"

/**
 * print_list - prints  nodes stored
 * @h: pointer to node list
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	unsigned int ncount = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		ncount++;
		h = h->next;
	}
	return (ncount);
}
