#include "lists.h"

/**
 * add_nodeint - and node to head of list
 * @head: pointer to the head of the list
 * @n: interger being add to head
 * Return: address of the new element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(listint_t));

	if (new == NULL)
	{
		return (NULL);
	}
	if (n == 0)
	{
		new->n = 0;
	}
	new->n = n;
	new->next = *head;
	new = *head;
	return (*head);

}
