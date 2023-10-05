#include "hash_tables.h"

/**
 * hash_table_print - Prints a hash table
 * @ht: the hash table
 *
 * Return: Nothing.
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int index = 0;
	unsigned char cflag = 0;
	hash_node_t *newnode;

	if (ht == NULL)
	{
		return;
	}
	printf("{");
	for (; index < ht->size; index++)
	{
		if (ht->array[index] != NULL)
		{
			if (cflag == 1)
				printf(", ");

			newnode = ht->array[index];
			while (newnode != NULL)
			{
				printf("'%s': '%s'", newnode->key, newnode->value);
				newnode = newnode->next;
				if (newnode != NULL)
					printf(", ");
			}
			cflag = 1;
		}
	}
	printf("}\n");
}
