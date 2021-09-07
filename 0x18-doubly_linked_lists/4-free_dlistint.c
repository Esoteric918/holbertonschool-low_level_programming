#include "lists.h"
/**
 *
 *
 *
 *
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
