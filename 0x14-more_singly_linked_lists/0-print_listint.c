#include "lists.h"
/ **
 * listint_len - prints all elements of listint_t
 * @h: struct of listint_t 
 * 
 * Return: number of nodes
 * /
 size_t listint_len(const listint_t *h)
 {
     size_t count= head;

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
 }