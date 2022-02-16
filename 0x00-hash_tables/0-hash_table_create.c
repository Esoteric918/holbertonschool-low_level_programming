#include "hash_tables.h"
/**
 * hash_table_create - creates a hash table
 *
 * @size: size of the array
 * Return:  new hash_table_t*
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *newHash;

	if (!size)
		return (NULL);

	newHash = malloc(sizeof(hash_table_t));

	if (!newHash)
		return (NULL);

	newHash->size = size;
	newHash->array = calloc(sizeof(hash_table_t *), size);

	if (!newHash)
	{
		free(newHash);
		return (NULL);
	};
	return (newHash);
}
