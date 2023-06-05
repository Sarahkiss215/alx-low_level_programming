#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints all the elements of a listint_t list
 * @h: members of the listint_t list
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	int nodes;

	nodes = 0;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		nodes++;
	}
	return (nodes);
}
