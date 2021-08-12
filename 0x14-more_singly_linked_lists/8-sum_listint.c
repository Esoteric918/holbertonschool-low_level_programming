#include "lists.h"

/**
 *
 *
 *
 *
 */
int sum_listint(listint_t *head)
{
	int count = 0;

	if (head == NULL)
		return (NULL);
	while (head)
	{
		n = n + head->n;
		head = head->next;
	}
	return (n);
}
