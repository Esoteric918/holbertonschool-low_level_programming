#include "lists.h"

/**
 * add_dnodeint - add node to begining of list
 * @head: ptr to ptr of head of list
 * @n: data in the list
 *
 * Return: the address of the new element, or NULL if it failed
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
