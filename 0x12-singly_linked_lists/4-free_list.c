#include "lists.h"
#include <stdlib.h>

/**
 * free_list - frees a list_t list
 * @head: pointer to start of the list
 *
 * Return: Nothing
 */

void free_list(list_t *head)
{
	list_t *freeup;

	while (head)
	{
		freeup = head->next;
		free(head->str);
		free(head);
		head = freeup;
	}
}
