#include "lists.h"

/**
 * sum_listint - sum all data in linked list
 * @head: pointer to head
 *
 * Return: sum of list
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
