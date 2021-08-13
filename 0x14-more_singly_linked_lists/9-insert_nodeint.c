#include "lists.h"
/**
 * insert_nodeint_at_index - insert node at location
 *@head: ptr to head node
 *@idx: where new node is placed
 *@n: data in node
 *Return: new
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int x;
	listint_t *new;
	listint_t *temp;

	if (!head)
		return (NULL);
	if (*head)
	{
		new = malloc(sizeof(listint_t));

		if (new == NULL)
			return (NULL);
		new->n = n;
		if (!idx)
		{
			new->next = *head;
			*head = new;
			return (new);
		}
		temp = *head;
		for (x = 0; x < idx - 1; x++)
		{
			if (temp == NULL)
				return (NULL);
			temp = temp->next;
		}
		new->next = temp->next;
		temp->next = new;
	}
	else
	{	new = malloc(sizeof(listint_t));

		if (new == NULL)
			return (NULL);
		new->n = n;
		*head = new;
	}
	return (new);
}
