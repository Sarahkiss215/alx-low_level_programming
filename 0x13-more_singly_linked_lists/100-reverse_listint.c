#include "lists.h"

/**
 * *reverse_listint - reverses a listint_t linked list
 * @head: a pointer to the head of the list
 *
 * Return: a pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *start;
	listint_t *end;

	if (*head == NULL || head == NULL)
	{
		return (NULL);
	}
	end = NULL;

	while ((*head)->next)
	{
		start = (*head)->next;
		(*head)->next = end;
		end = (*head);
		*head = start;
	}
	(*head)->next = end;

	return (*head);
}
