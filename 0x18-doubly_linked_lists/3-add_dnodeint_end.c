#include "lists.h"

/**
 * add_dnodeint_end - adds new node to end of list
 * @head: ptr to ptr of head of list
 * @n: data in node
 * Return: the address of the new element, or NULL if it failed
 *
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newNode;
	dlistint_t *temp = *head;

	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->next = NULL;

	if (*head == NULL)
	{	newNode->prev = NULL;
		*head = newNode;
	}
	else
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = newNode;
		newNode->prev = temp;
	}
	return (newNode);
}
