#include "hash_tables.h"

/**
 * hash_table_print - print key/value of hashTable
 * @ht: table to be printed
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int idx = 0;
	hash_node_t *node;

	if (!ht)
		return;
	printf("{");

	for (; idx < ht->size; idx++)
	{
		node = ht->array[idx];
		while (node)
		{
			printf("'%s': '%s', ", node->key, node->value);
			node = node->next;
		}
	}
	printf("}\n");
}
