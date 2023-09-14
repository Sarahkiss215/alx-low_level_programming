#include "lists.h"
#include <stdlib.h>

/**
 * *insert_dnodeint_at_index - inserts a new node at a given position
 * @h: Head node of the list
 * @idx: index of the list where new node should be added, starts at 0
 * @n: number with the new node
 *
 * Return: address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp = *h, *newnode;

	if (idx == 0)
		return (add_dnodeint(h, n));
	for (; idx != 1; idx--)
	{
		temp = temp->next;
		if (temp == NULL)
		{
			return (NULL);
		}
	}
	if (temp->next == NULL)
	{
		return (add_dnodeint_end(h, n));
	}
	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
	{
		return (NULL);
	}
	newnode->n = n;
	newnode->prev = temp;
	newnode->next = temp->next;
	temp->next->prev = newnode;
	temp->next = newnode;
	return (newnode);
}
