#include "lists.h"

/**
 * print_dlistint - prints all elements of dlistint_t list
 * @h: Head node of the list
 *
 * Return: Number of nodes.
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t nodes;

	nodes = 0;
	while (h)
	{
		nodes++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (nodes);
}
