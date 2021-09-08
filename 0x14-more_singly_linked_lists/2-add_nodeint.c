#include "lists.h"

/**
 * add_nodeint - and node to head of list
 * @head: pointer to the head of the list
 * @n: interger being add to head
 * Return: address of the new element - NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	if (head == NULL)
<<<<<<< HEAD
		return (NULL);
=======
	return (NULL);
>>>>>>> 7d5eea3ab23733cc53d9bd075b9d097118711581
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
<<<<<<< HEAD
	}
	if (n == 0)
	{
		new->n = 0;
	}
	new->n = n;
=======

	new->n = n;

	new->next = *head;
>>>>>>> 7d5eea3ab23733cc53d9bd075b9d097118711581
	*head = new;
	return (new);
}
