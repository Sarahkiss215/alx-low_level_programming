#include "hash_tables.h"

shash_table_t *shash_table_create(unsigned long int size);
int shash_table_set(shash_table_t *ht, const char *key, const char *value);
char *shash_table_get(const shash_table_t *ht, const char *key);
void shash_table_print(const shash_table_t *ht);
void shash_table_print_rev(const shash_table_t *ht);
void shash_table_delete(shash_table_t *ht);

/**
 * shash_table_create - Creates a sorted hash table.
 * @size: The size of array of new sorted hash table.
 *
 * Return: pointer to the newly sorted hash table, NULL on failure
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *ht;
	unsigned long int index = 0;

	ht = malloc(sizeof(shash_table_t));
	if (ht == NULL)
	{
		return (NULL);
	}
	ht->size = size;
	ht->array = malloc(sizeof(shash_node_t *) * size);
	if (ht->array == NULL)
	{
		return (NULL);
	}
	for (; index < size; index++)
	{
		ht->array[index] = NULL;
	}
	ht->shead = NULL;
	ht->stail = NULL;
	return (ht);
}

/**
 * shash_table_set - Adds an element to a sorted hash table.
 * @ht: the sorted hash table.
 * @key: The key
 * @value: The value associated with key.
 *
 * Return: 1 on success, 0 otherwise.
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *newht, *temp;
	char *newvalue;
	unsigned long int index;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);
	newvalue = strdup(value);
	if (newvalue == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	temp = ht->shead;
	while (temp)
	{
		if (strcmp(temp->key, key) == 0)
		{
			free(temp->value);
			temp->value = newvalue;
			return (1);
		}
		temp = temp->snext;
	}
	newht = malloc(sizeof(shash_node_t));
	if (newht == NULL)
	{
		free(newvalue);
		return (0);
	}
	newht->key = strdup(key);
	if (newht->key == NULL)
	{
		free(newvalue);
		free(newht);
		return (0);
	}
	newht->value = newvalue;
	newht->next = ht->array[index];
	ht->array[index] = newht;

	if (ht->shead == NULL)
	{
		newht->sprev = NULL;
		newht->snext = NULL;
		ht->shead = newht;
		ht->stail = newht;
	}
	else if (strcmp(ht->shead->key, key) > 0)
	{
		newht->sprev = NULL;
		newht->snext = ht->shead;
		ht->shead->sprev = newht;
		ht->shead = newht;
	}
	else
	{
		temp = ht->shead;
		while (temp->snext != NULL && strcmp(temp->snext->key, key) < 0)
			temp = temp->snext;
		newht->sprev = temp;
		newht->snext = temp->snext;
		if (temp->snext == NULL)
			ht->stail = newht;
		else
			temp->snext->sprev = newht;
		temp->snext = newht;
	}
	return (1);
}

/**
 * shash_table_get - Retrieves a value associated with a key
 * @ht: the sorted hash table.
 * @key: The key
 *
 * Return: value associated with the element, NULL if key not found
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	shash_node_t *newnode;
	unsigned long int index;

	if (ht == NULL || key == NULL || *key == '\0')
	{
		return (NULL);
	}
	index = key_index((const unsigned char *)key, ht->size);
	if (index >= ht->size)
	{
		return (NULL);
	}
	newnode = ht->shead;
	while (newnode != NULL && strcmp(newnode->key, key) != 0)
	{
		newnode = newnode->snext;
	}
	return ((newnode == NULL) ? NULL : newnode->value);
}

/**
 * shash_table_print - Prints a sorted hash table in order.
 * @ht: the sorted hash table.
 *
 * Return: Nothing.
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *newnode;

	if (ht == NULL)
	{
		return;
	}
	newnode = ht->shead;
	printf("{");
	while (newnode != NULL)
	{
		printf("'%s': '%s'", newnode->key, newnode->value);
		newnode = newnode->snext;
		if (newnode != NULL)
			printf(", ");
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - Prints a sorted hash table in reverse order.
 * @ht: the sorted hash table to print.
 *
 * Return: Nothing.
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *newnode;

	if (ht == NULL)
	{
		return;
	}
	newnode = ht->stail;
	printf("{");
	while (newnode != NULL)
	{
		printf("'%s': '%s'", newnode->key, newnode->value);
		newnode = newnode->sprev;
		if (newnode != NULL)
			printf(", ");
	}
	printf("}\n");
}

/**
 * shash_table_delete - Deletes a sorted hash table.
 * @ht: the sorted hash table.
 *
 * Return: Nothing.
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_table_t *head = ht;
	shash_node_t *newnode, *temp;

	if (ht == NULL)
	{
		return;
	}
	newnode = ht->shead;
	while (newnode)
	{
		temp = newnode->snext;
		free(newnode->key);
		free(newnode->value);
		free(newnode);
		newnode = temp;
	}
	free(head->array);
	free(head);
}
