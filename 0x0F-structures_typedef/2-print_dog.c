#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_dog - prnt objects in strc dog
 *@d:ptr to strc dog
 *
 *Return: nothing
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		printf("(nil)");
	if (d->name == NULL)
		printf("Name: (nil)\n");
	else
	{
		printf("Name: %s\n", d->name);
		printf("Age: %f \n", d->age);
	}
	if (d->owner == NULL)
		printf ("Owner: (nil)\n");
	else
		printf("Owner: %s\n",d->owner);
}
