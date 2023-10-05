#include "hash_tables.h"

/**
 * hash_table_delete - Deletes a hash table
 * @ht:the hash table
 *
 * Return: Nothing.
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *newnode, *temp;
	unsigned long int index = 0;
	hash_table_t *head = ht;

	for (; index < ht->size; index++)
	{
		if (ht->array[index] != NULL)
		{
			newnode = ht->array[index];
			while (newnode != NULL)
			{
				temp = newnode->next;
				free(newnode->key);
				free(newnode->value);
				free(newnode);
				newnode = temp;
			}
		}
	}
	free(head->array);
	free(head);
}
