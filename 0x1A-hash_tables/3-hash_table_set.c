#include "hash_tables.h"
/**
 * hash_table_set - Set a value in the hash table.
 * @ht: Hash table.
 * @key: Key to be indexed.
 * @value: Value to set in the hash table.
 *
 * Return: 1 if works, 0 if doesn't.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new_node, *current;

	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);
	if (value == NULL || key == NULL || ht == NULL)
		return (0);
	index = key_index((unsigned char *)key, ht->size);
	current = ht->array[index];
	while (current != NULL)
	{
		if (strcmp(current->key, key) == 0)
		{
			free(current->value);
			current->value = strdup(value);
			if (current->value != NULL)
			{
				return (1);
			}
			return (0);
		}
		current = current->next;
	}
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	if (new_node->key == NULL)
	{
		free(new_node);
		return (0);
	}
	if (new_node->value == NULL)
	{
		free(new_node->key);
		free(new_node);
		return (0);
	}
	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	return (1);
}
