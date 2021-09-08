#include "lists.h"
/**
 * insert_dnodeint_at_index - insert node at given location
 * @h: prt to ptr of head
 * @idx: index of the list where the new node should be added
 * @n: Integer stored in new_dl
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
		{
			new->next = *h;
			*h = new;
			return (new);
		}
		temp = *h;
		for (x = 0; temp && x < idx - 1; x++)
			temp = temp->next;
		new->next = temp->next;
		new->next->prev = new;
		temp->next = new;
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
