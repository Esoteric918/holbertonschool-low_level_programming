#include "hash_tables.h"

/**
 * hash_table_print - print key/value of hashTable
 * @ht: table to be printed
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *node;
	int comma = 0;

	if (!ht)
		return;

	printf("{");
	while (i < ht->size)
	{
		node = ht->array[i];
		while (node)
		{
			if (comma == 1)
				printf(", ");
			printf("'%s': '%s'", node->key, node->value);
			comma = 1;
			node = node->next;
		}
		i++;
	}
	printf("}\n");
}
