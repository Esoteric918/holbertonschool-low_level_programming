#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: hash table to add or update the key/value to
 * @key: the node key. Key can not be an empty string
 *
 * Return: value associated with the key, or NULL if key could not be found
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *node = NULL;

	if (!ht || !key || !*key)
		return (NULL);

	node = ht->array[key_index((const unsigned char *)key, ht->size)];

	while(node)
	{
		if (strcmp(node->key, key) == 0)
		{
				return (node->value);
		}
		node = node->next;
	}
	return (NULL);
}
