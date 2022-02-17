#include "hash_tables.h"

/**
 * hash_table_set - adds new key/value to table
 *
 * @ht: is the table to be updated/added to
 * @key: is what is updated/added
 * @value: is data in the key to be updated/added
 * Return: 1, 0
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *temp, *next, *newHash;
	unsigned long int idx, hash, size;

	newHash = malloc(sizeof(hash_table_t));

	if (!ht || !key || !value || !newHash)
		return (0);

	size = ht->size;
	hash = hash_djb2((const unsigned char *)key);
	idx = hash % size;

	newHash->key = strdup(key);
	newHash->value = strdup(value);
	newHash->next = ht->array[idx];
	temp = ht->array[idx];
	while (temp)
	{
		next = temp->next;
		if (strcmp(temp->key, key) == 0)
		{
			newHash->next = temp->next;
			free(temp->key);
			free(temp->value);
			free(temp);
			break;
		}
		temp = next;
	}
	ht->array[idx] = newHash;
	return (1);
}
