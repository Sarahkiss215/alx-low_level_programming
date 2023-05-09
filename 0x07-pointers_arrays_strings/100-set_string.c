#include "main.h"

/**
 * set_string - sets the value of a pointer to a char
 * @s: pointer to char
 * @to: value to be assigned to *s
 *
 * Return: nothing
 */
void set_string(char **s, char *to)
{
	*s = to;
}
