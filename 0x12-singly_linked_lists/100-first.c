#include <stdio.h>

void hare_tortoise(void) __attribute__((constructor));
/**
 * hare_tortoise - prints a string before the main function is executed.
 *
 * Return: Nothing
 */

void hare_tortoise(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
