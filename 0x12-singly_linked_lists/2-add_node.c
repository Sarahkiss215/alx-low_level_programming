#include "lists.h"
#include <stdlib.h>
#include "string.h"

/**
 * *add_node - adds new node at the beginning of list_t
 * @head: pointer to the head of list_t
 * @str: string to be copied
 *
 * Return: Address to the new element, Null if it fails
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *newnode;
	char *ptr;
	unsigned int len = 0;

	newnode = malloc(sizeof(list_t));
	if (newnode == NULL)
	{
		return (NULL);
	}
	ptr = strdup(str);
	while (str[len])
	{
		len++;
	}
	if (ptr == NULL)
	{
		free(newnode);
		return (NULL);
	}
	newnode->str = ptr;
	newnode->len = len;
	newnode->next = *head;

	*head = newnode;
	return (newnode);
}
