#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - frees a listint_t list
 * @head: members of the list
 *
 * Return: Nothing
 */
void free_listint(listint_t *head)
{
	listint_t *freeup;

	while (head)
	{
		freeup = head->next;
		free(head);
		head = freeup;
	}
}
