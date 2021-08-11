#include "lists.h"

/**
 * pop_listint - deletes head node, and returns head node's data
 * @head: head node
 *
 * Return: data from head node, 0 if empty
 */
int pop_listint(listint_t **head)
{
	int num;
	listint_t *temp = NULL;

	if (*head == NULL)
		return (-1);
	temp = (*head)->next;
	num = (*head)->n;
	free(*head);
	*head = temp;

	return (num);
}
