#include "lists.h"
<<<<<<< HEAD
/ **
 * listint_len - prints all elements of listint_t
 * @h: struct of listint_t 
 * 
=======
/**
 * print_listint - prints all elements of listint_t
 * @h: struct of listint_t
 *
>>>>>>> 7d5eea3ab23733cc53d9bd075b9d097118711581
 * Return: number of nodes
 * /
 size_t listint_len(const listint_t *h)
 {
     size_t count= head;

<<<<<<< HEAD
     if (h == NULL)
     return(0);

     while (h != NULL)
     {
         if (h->next == '\0')
         {
             printf("0\n");
         }
         else
         {
             printf("%i\n",h->n);
             h = h->next;
             count++;
         }
         
     }
     return (count);
=======
	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		printf("%i\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
>>>>>>> 7d5eea3ab23733cc53d9bd075b9d097118711581
}
