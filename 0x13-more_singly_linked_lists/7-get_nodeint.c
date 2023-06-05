#include "lists.h"

/**
 * *get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: members or nodes in the list
 * @index: index of the node, starting at 0
 *
 * Return: NULL if the node does not exist
 * otherwise the nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int position;

	position = 0;/* index of the current node */
	while (position < index)
	{
		if (head == NULL)
		{
			return (NULL);
		}
		position++;
		head = head->next;
	}
	return (head);
}
