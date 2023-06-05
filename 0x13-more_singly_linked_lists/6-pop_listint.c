#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: pointer to the head of the list
 *
 * Return: head node’s data (n), or 0 if the linked list is empty
 */
int pop_listint(listint_t **head)
{
	int value;
	listint_t *headnode;

	if (*head == NULL)
	/* if the list is empty */
	{
		return (0);
	}
	/* since head is being deleted,head is changed to next node*/
	headnode = (*head)->next;
	value = (*head)->n;
	free(*head);
	*head = headnode;

	return (value);
}
