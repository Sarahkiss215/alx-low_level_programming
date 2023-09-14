#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a dlistint_t list
 * @h: Head node of the list
 *
 * Return: number of elements in the list.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t nodes;

	nodes = 0;
	while (h)
	{
		nodes++;
		h = h->next;
	}
	return (nodes);
}
