#include "lists.h"
#include <stdlib.h>

/**
 * *insert_nodeint_at_index -  inserts a new node at a given position
 * @head: pointer to the head of the list
 * @idx: index of list where the new node is added
 * @n: integer
 *
 * Return: NULL if function fails, NUll if it is not possible to add
 * new node at idx, address of the newnode
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int position;
	listint_t *newnode;

	newnode = malloc(sizeof(listint_t));
	/* if function fails */
	if (newnode == NULL)
	{
		return (NULL);
	}
	newnode->n = n;/*data value of the current node */
	if (idx == 0)
	{
		newnode->next = *head;/* changing the head of the list to next */
		*head = newnode;
		return (newnode);
	}
	position = 0;/*index of the current node */
	while (position < (idx - 1))
	{
		/* if not possible to add a new node @idx */
		if (*head == NULL || (*head)->next == NULL)
		{
			return (NULL);
		}
		position++;
		*head = (*head)->next;
	}
	newnode->next = (*head)->next;
	(*head)->next = newnode;

	return (newnode);
}
