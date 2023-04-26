#include <main.h>
/**
 * main - prints the alphabets
 * followed by a new line
 *
 * Return: 0
 */
int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		_putchar(alphabet);
	_putchar('\n');
	return (0);
}
