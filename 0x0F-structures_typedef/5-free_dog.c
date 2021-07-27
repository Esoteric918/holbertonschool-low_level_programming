#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - free members of dog_t
 *@d: ptr to dog struct
 *
 *Return: nothing
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
