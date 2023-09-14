#include "lists.h"

/**
 * *get_dnodeint_at_index - returns the nth node of a dlistint_t list
 * @head: Head node of the list
 * @index: index of node starting from 0
 *
 * Return: nth node of a dlistint_t linked list.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	for (; index != 0; index--)
	{
		if (head == NULL)
		{
			return (NULL);
		}
		head = head->next;
	}
	return (head);
}
