#include "lists.h"

/**
 * dlistint_len - returns the number of elem linked
 * @h: date pointed to in node
 *
 * Return: int
 *
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t ncount = 0;

	const dlistint_t *temp = h;

	for (; temp != NULL; temp = temp->next, ++ncount)
		;
	return (ncount);
}
