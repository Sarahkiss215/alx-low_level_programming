#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data (n) of a list
 * @head: Head node of list
 *
 * Return: sum of all the data (n) of a list, 0 if list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	int sum;

	sum = 0;
	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
