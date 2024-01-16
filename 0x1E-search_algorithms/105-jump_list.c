#include <math.h>
#include "search_algos.h"

/**
 * jump_list - search a single linked list by the jump search method
 * @list: popointer to the head of the list to search in
 * @size: number of nodes in list
 * @value: value to search for
 *
 * Return: pointer to first node containing value or NULL if list is empty
 */

listint_t *jump_list(listint_t *list, size_t size, int value)
{
	listint_t *node = list;
	int i, j;

	if (list == NULL || size == 0)
		return (NULL);

	j = sqrt(size);

	while (node->next != NULL)
	{
		list = node;

		for (i = 0; i < j; i++)
		{
			node = node->next;
			if (node->next == NULL)
				break;
		}

		printf("Value checked at index [%lu] = [%d]\n", node->index, node->n);

		if (node->n >= value)
			break;
	}

	printf("Value found between indexes [%lu] and [%lu]\n", list->index,
	       node->index);

	while (list != NULL && list != node->next)
	{
		printf("Value checked at index [%lu] = [%d]\n", list->index, list->n);
		if (list->n == value)
			return (list);
		list = list->next;
	}

	return (NULL);
}
