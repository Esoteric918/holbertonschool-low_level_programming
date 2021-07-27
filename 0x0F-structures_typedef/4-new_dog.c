#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @src: string to be allocated
 *
 *Return: 0
 */
char *_strdup(char *src)
{
	char *str;
	char *p;
	int len = 0;

	if (src == NULL)
		return (NULL);
	while (src[len])
		++len;
	str = malloc(len + 1);
	if (str == NULL)
		return (NULL);
	p = str;
	while (*str)
		*p++ = *src++;
	*p = '\0';
	return (str);
}
/**
 * *new_dog - init dog_t
 *@name: name char
 *@age: age float
 *@owner: owner char
 *
 *Return: NULL if fails and ptr if true
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog *newdog;

	newdog = malloc(sizeof(dog_t));

	if (newdog)
	{
		newdog->name = _strdup(name);
		if (newdog->name == NULL)
		{
			free(newdog->name);
			free(newdog);
			return (NULL);
		}
		newdog->owner = _strdup(owner);

		if (newdog->owner == NULL)
		{
			free(newdog->owner);
			free(newdog->name);
			free(newdog);
			return (NULL);
		}
		newdog->age = age;
	}
	else
		free(newdog);
	return (newdog);
}
