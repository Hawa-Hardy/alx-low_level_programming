#include "hash_tables.h"

/**
 * hash_table_print - Prints a hash table.
 * @ht: Points to the hash table
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node;
	unsigned long int idx;
	unsigned char commaFlag = 0;

	if (ht == NULL)
		return;

	printf("{");
	for (idx = 0; idx < ht->size; idx++)
	{
		if (ht->array[idx] != NULL)
		{
			if (commaFlag == 1)
				printf(", ");

			node = ht->array[idx];
			while (node != NULL)
			{
				printf("'%s': '%s'", node->key, node->value);
				node = node->next;
				if (node != NULL)
					printf(", ");
			}
			commaFlag = 1;
		}
	}
	printf("}\n");
}
