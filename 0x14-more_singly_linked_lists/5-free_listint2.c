#include "lists.h"

/**
 * free_listint2 - frees a listint_t list
 * @head: start of struct listint_t
 * Return: Nothing if good
 */
void free_listint2(listint_t **head)
{
	listint_t *current;
	listint_t *next;

	if (head == NULL)
		return (NULL);
	current = *head;

	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
	*head = NULL;
}
