#include "lists.h"

/**
 * print_dlistint - prints elem of dlistint_t
 * @h: pointer to data in dlistint_t
 * Return: number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t ncount = 0;

	const dlistint_t *temp = h;

	for (; temp->prev; temp = temp->prev)
		;
	for (; temp != NULL; temp = temp->next, ++ncount)
		printf("%d\n", temp->n);
	return (ncount);
}
