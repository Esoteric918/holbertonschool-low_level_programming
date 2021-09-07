#include "lists.h"

/**
 *
 *
 *
 *
 *
 *
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newNode;

	if (head == NULL)
		return (NULL);
	newNode = malloc(sizeof(dlistint_t));

	if (newNode == NULL)
		return (NULL);
	newNode->prev = NULL;
	newNode->next = *head;
	newNode->n = n;
	if ((*head) != NULL)
		(*head)->prev = newNode;
	(*head) = newNode;
	return (*head);
}
