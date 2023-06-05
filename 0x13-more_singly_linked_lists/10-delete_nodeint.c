#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - deletes the node at index of listint_t linked list
 * @head: pointer to the head of the list
 * @index: index of the node that should be deleted
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int position;
	listint_t *currentnode;
	listint_t *previousnode = *head;

	/* if function fails */
	if (previousnode == NULL)
	{
		return (-1);
	}
	/* On success */
	if (index == 0)
	{
		*head = (*head)->next;
		free(previousnode);
		return (1);
	}
	/* index at current node starts at 0 */
	for (position = 0; position < (index - 1); position++)
	{
		if (previousnode->next == NULL)
		{
			return (-1);/* function failure */
		}
		previousnode = previousnode->next;
	}
	currentnode = previousnode->next;
	previousnode->next = currentnode->next;
	free(currentnode);
	return (1);
}
