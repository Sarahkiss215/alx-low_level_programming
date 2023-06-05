#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked listint_t list
 * @h: members of listint_t list
 *
 * Return: number of elements in the list
 */
size_t listint_len(const listint_t *h)
{
	int elements;

	elements = 0;
	while (h != NULL)
	{
		elements++;
		h = h->next;
	}
	return (elements);
}
