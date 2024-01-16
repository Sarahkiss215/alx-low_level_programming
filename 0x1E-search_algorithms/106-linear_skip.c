#include "search_algos.h"

/**
 * linear_skip - searches for a value in a sorted skip list of integers
 * @list: pointer to the head of the skip list to search in
 * @value: value to be searched for
 *
 * Return: pointer to first node containing value or NULL if list is empty
 */

skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *node = list;

	if (list == NULL)
		return (NULL);

	while (node->next != NULL)
	{
		list = node;

		if (node->express)
		{
			node = node->express;
		}
		else
		{
			while (node->next)
				node = node->next;
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
