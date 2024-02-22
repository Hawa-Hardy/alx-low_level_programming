#include "hash_tables.h"

/**
 * hash_table_set - Adds an element to the hash table.
 * @ht:  hash table you want to add the key/value to
 * @key: The key to add. Not empty
 * @value: The value associated with key.
 *
 * Return: failure 0, Otherwise 1.
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_k;
	char *valueCopy;
	unsigned long int idx, i;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	valueCopy = strdup(value);
	if (valueCopy == NULL)
		return (0);

	idx = key_index((const unsigned char *)key, ht->size);
	for (i = idx; ht->array[i]; i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = valueCopy;
			return (1);
		}
	}

	new_k = malloc(sizeof(hash_node_t));
	if (new_k == NULL)
	{
		free(valueCopy);
		return (0);
	}
	new_k->key = strdup(key);
	if (new_k->key == NULL)
	{
		free(new_k);
		return (0);
	}
	new_k->value = valueCopy;
	new_k->next = ht->array[idx];
	ht->array[idx] = new_k;

	return (1);
}
