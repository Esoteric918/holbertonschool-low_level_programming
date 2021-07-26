#ifndef _struct_dog_
#define _struct_dog_
/**
 * struct dog - showes info on dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Description: gives the dog name , age and the owner of the dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
