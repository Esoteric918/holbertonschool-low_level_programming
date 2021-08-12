#include "lists.h"

/**
 * get_nodeint_at_index - returns node at index
 * @head: head of list
 * @index: index of list
 *
 * Return: the node at index, NULL if it doesn't exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;

	if (head == NULL)
		return (NULL);
	while (head != NULL)
	{
		if (count == index)
			return (head);
		++count;
		head = head->next;
	}
	return (head);
}
