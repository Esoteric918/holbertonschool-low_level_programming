#include "hash_tables.h"

/**
 * hash_table_print - print key/value of hashTable
 * @ht: table to be printed
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int idx = 0;
	hash_node_t *node;
	int key = 0;

	if (!ht)
		return;
	printf("{");

	for (; key = 0, idx < ht->size; ++idx)
	{
		node = ht->array[idx];
		while (node)
		{
			if (key && node)
				printf(", ");
			printf("'%s': '%s'", node->key, node->value); ++key;
			node = node->next;
		}
	}
	printf("}\n");
}
