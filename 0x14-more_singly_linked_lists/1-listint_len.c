<<<<<<< HEAD
=======
#include "lists.h"

/**
 * listint_len - prints data in struct
 * @h: ptr to head
 *Return: count
 */
size_t listint_len(const listint_t *h)
{
	int count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
>>>>>>> 7d5eea3ab23733cc53d9bd075b9d097118711581
