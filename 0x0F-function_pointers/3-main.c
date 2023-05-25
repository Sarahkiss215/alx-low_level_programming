#include "3-calc.h"
#include <stddef>
#include <stdio.h>

/**
 * main - prints result of simple opertaions
 * @argc: number of arguments
 * @argv: pointer to array of pointers to arguments
 *
 * Return: Always 0.
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	char *op;
	int digit1;
	int digit2;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	digit1= atoi(argv[1]);/* first integer at index 1 */
	op = argv[2];/* operator at index 2 */
	digit2 = atoi(argv[3]);/*second integer at index 3 */

	if (get_op_func(op) == NULL || op[1] != '\0')
	{
		printf("Error\n");
		exit(99);/* operator not found */
	}
	if ((op == '/' || op == '%') !atoi(argv[3]))
	{
		printf("Error\n");
		return (100);/* (/ or %) by zero */
	}
	printf("%d\n", get_op_func(op)(num1, num2));
	return (0);
}
