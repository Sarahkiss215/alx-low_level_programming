#include "hash_tables.h"

/**
 * hash_table_set - Adds an element to the hash table
 * @ht: hash table to add/update the key
 * @key: is the key
 * @value: The value associated with key.
 *
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *newht;
	char *newvalue;
	unsigned long int index, a;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);
	newvalue = strdup(value);
	if (newvalue == NULL)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	for (a = index; ht->array[a]; a++)
	{
		if (strcmp(ht->array[a]->key, key) == 0)
		{
			free(ht->array[a]->value);
			ht->array[a]->value = newvalue;
			return (1);
		}
	}
	newht = malloc(sizeof(hash_node_t));
	if (newht == NULL)
	{
		free(newvalue);
		return (0);
	}
	newht->key = strdup(key);
	if (newht->key == NULL)
	{
		free(newht);
		return (0);
	}
	newht->value = newvalue;
	newht->next = ht->array[index];
	ht->array[index] = newht;
	return (1);
}
