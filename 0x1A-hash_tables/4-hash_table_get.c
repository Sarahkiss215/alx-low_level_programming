#include "hash_tables.h"

/**
 * *hash_table_get - Retrieves a value associated with a key
 * @ht: the hash table
 * @key: the key
 *
 * Return:  value associated with the element, NULL if key not found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *newnode;

	if (ht == NULL || key == NULL || *key == '\0')
	{
		return (NULL);
	}
	index = key_index((const unsigned char *)key, ht->size);
	if (index >= ht->size)
	{
		return (NULL);
	}
	newnode = ht->array[index];
	while (newnode && strcmp(newnode->key, key) != 0)
	{
		newnode = newnode->next;
	}
	return ((newnode == NULL) ? NULL : newnode->value);
}
