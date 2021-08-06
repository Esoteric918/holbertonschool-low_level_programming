#include "lists.h"
/**
 * add_node - adds a new node to the beginning of a linked list
 * @head: pointer to the head of the list
 * @str: string to add to the list
 * Return: NULL on fail, otherwise a new elem addr
 */
list_t *add_node(list_t **head, const char *str)
{
	char *dup;
	int len = 0;
	list_t *new;

	new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);

	dup = strdup(str);

	if (dup == NULL)
	{
		free(new);
		return (NULL);
	}
	while (str[len])
		++len;

	new->str = dup;
	new->len = len;
	new->next = *head;

	*head = new;

	return (new);
}
