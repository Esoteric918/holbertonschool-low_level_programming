#include "lists.h"
/**
 * insert_dnodeint_at_index - insert node at given location
 * @h: prt to ptr of head
 * @idx: index of the list where the new node should be added
 * @n: Integer stored in new
 * Return: the address of the new node, or NULL if it failed
 *
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int x;
	dlistint_t *new;
	dlistint_t *temp;

	if (!h && idx != 0)
		return (NULL);
	if (*h)
	{
		new = malloc(sizeof(dlistint_t));

		if (new == NULL)
			return (NULL);
		new->n = n;
		if (!idx)
			return (add_dnodeint(h, n));
		temp = *h;
		for (x = 0; temp && x < idx - 1; x++)
			temp = temp->next;
		if (x == idx - 1)
		{
			new->next = temp->next;
			temp->next->prev = new;
			temp->next = new;
		}
		else
		{
			free(new);
			return (NULL);
		}
	}
	else
	{
		new = malloc(sizeof(dlistint_t));
		if (new == NULL)
			return (NULL);
		new->n = n;
		*h = new;
	}
	return (new);
}
