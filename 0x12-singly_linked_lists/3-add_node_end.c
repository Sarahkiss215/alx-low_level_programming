#include "lists.h"
#include <stdlib.h>
#include "string.h"

/**
 * *add_node_end - adds a new node at the end of a list_t list
 * @head: pointer to the head of the list_t
 * @str: string to be duplicated
 *
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newnode;
	list_t *lastnode;
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
	if (*head != NULL)
	{
		lastnode = *head;
		while (lastnode->next != NULL)
		{
			lastnode = lastnode->next;
		}
		lastnode->next = newnode;
	}
	else
	{
		*head = newnode;
	}
	return (*head);
}
