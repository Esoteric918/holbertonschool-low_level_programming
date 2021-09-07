#include "lists.h"
/**
 * free_dlistint - frees ptrs in link list
 * @head: ptr to head of list
 *
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *nodeList, *next;

	nodeList = head;

	while (nodeList)
	{
		next = nodeList->next;
		free(nodeList);
		nodeList = next;
	}
}
