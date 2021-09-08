#include "lists.h"
/**
 * sum_dlistint - sum of n in node
 * @head: ptr to head node
 *
 * Return: 0 if list is empty or sum of data in nodes
 */
int sum_dlistint(dlistint_t *head)
{
	unsigned int n = 0;

	if (head == NULL)
		return (0);

	while (head)
	{
		n = n + head->n;
		head = head->next;
	}
	return (n);
}
