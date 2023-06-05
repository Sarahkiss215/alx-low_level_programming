#include "lists.h"
#include <stdlib.h>

/**
 * *add_nodeint -  adds a new node at the beginning of a listint_t list
 * @head: pointer to the head of the list
 * @n: integer
 *
 * Return: address of the new element, NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
	{
		return (NULL);
	}

	newnode->n = n;
	newnode->next = *head;
	*head = newnode;

	return (newnode);
}
