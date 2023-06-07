#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - frees a listint_t list
 * @head: pointer to thee head of the list
 *
 * Return: Nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *freeup;

	if (*head == NULL || head == NULL)
	{
		return;
	}
	while (*head != NULL)
	{
		freeup = (*head)->next;
		free(*head);
		*head = freeup;
	}
	head = NULL;
}
