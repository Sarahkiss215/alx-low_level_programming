#include "main.h"

/**
 * _pow_recursion - returns the value of x power y
 * @x: number to b treated
 * @y: power to x
 *
 * Return: -1 if y<0, 1 if y=0, value of x power y
 */

int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}
	if (y < 0)
	{
		return (-1);
	}
	return (x * _pow_recursion(x, y - 1));
}
