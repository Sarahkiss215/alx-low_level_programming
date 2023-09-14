#include  "lists.h"
#include <stdlib.h>

/**
 * free_dlistint - frees a dlistint_t list
 * @head: Head node of the list
 *
 * Return: Nothing.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
