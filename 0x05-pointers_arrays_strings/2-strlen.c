#include "main.h"

/**
 * _strlen - returns the length of a string
 * @str: pointer to a string
 *
 * Return: lenght of string
 */

size_t _strlen(char *str)
{
	size_t length = 0;

	while (*str++)
		length++;

	return (length);
}
