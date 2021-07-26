#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - initialize struct dog
 *@d: ptr to struct dog
 *@name: ptr to str
 *@age: age of struct sub
 *@owner: ptr to str
 *
 *
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{

	(*d) .name = name;
	(*d) .age = age;
	(*d) .owner = owner;
}
