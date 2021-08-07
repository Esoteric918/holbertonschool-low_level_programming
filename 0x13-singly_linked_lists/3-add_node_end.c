#include "lists.h"

/**
 * add_node_end - adds node to end of list
 * @head: head of list
 * @str: string for be duplicated
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	char *dup;
	int len = 0;
	list_t *new, *last;

	new = malloc(sizeof(list_t));

	if (new == NULL)
	{
		return (NULL);
	}

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
	new->next = NULL;

	if (!*head)
	{
		*head = new;
		return (new);
	}
	else
	{
		last = *head;
		while (last->next)
			last = last->next;
		last->next = new;
	}
	return (*head);

}
