#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - returns sum of two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - returns difference between two integers
 * @a: first number
 * @b: second number
 *
 * Return: difference between a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - returns the product of two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - returns the result of division of two integers
 * @a: first number
 * @b: second number
 *
 * Return: result of division of a and b
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - returns the remainder of two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: remainder of a and b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
