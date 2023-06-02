#include "lists.h"

/**
 * list_len - returns number of elements in a linked list_t list
 * @h: members of list_t
 *
 * Return: number of elements in the list_t
 */
size_t list_len(const list_t *h)
{
	unsigned int elements;

	elements = 0;
	while (h != NULL)
	{
		elements++;
		h = h->next;
	}
	return (elements);
}
