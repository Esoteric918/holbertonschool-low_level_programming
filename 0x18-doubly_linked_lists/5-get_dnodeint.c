#include "lists.h"

/**
 * get_dnodeint_at_index -  returns the nth node of a dlistint_t
 * @head: ptr to head of list
 * @index: palce where node is placed
 * Return: NULL on failure
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
    unsigned int count = 0;

    while (head != NULL)
    {
        if (count == index)
            return (head->next);
        count++;
        head = head->next;
    }
    return (NULL);
}
