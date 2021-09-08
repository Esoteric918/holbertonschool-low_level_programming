#include "lists.h"
/**
 *
 *
 *
 *
 *
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int x;
	dlistint_t *new;
	dlistint_t *temp;

	if (!h)
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
	{
		new = malloc(sizeof(dlistint_t));

		if (new == NULL)
			return (NULL);
		new->n = n;
		*h = new;
	}
	return (new);
}
