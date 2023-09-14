#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*8
 * main - generates passwords for crackme5 executable
 * @argc: Number of arguments passed
 * @argv: Argument vector
 *
 * Return: Always 0.
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	char password[7], *codex;
	int len = strlen(argv[1]), index = 0, temp = 0;

	codex = "A-CHRDw87lNS0E9B2TibgpnMVys5XzvtOGJcYLU+4mjW6fxqZeF3Qa1rPhdKIouk";

	temp = (len ^ 59) & 63;
	password[0] = codex[temp];
	for (; index < len; index++)
		temp += argv[1][index];
	password[1] = codex[(temp ^ 79) & 63];
	temp = 1;
	for (index = 0; index < len; index++)
		temp *= argv[1][index];
	password[2] = codex[(temp ^ 85) & 63];
	temp = 0;
	for (index = 0; index < len; index++)
	{
		if (argv[1][index] > temp)
			temp = argv[1][index];
	}
	srand(temp ^ 14);
	password[3] = codex[rand() & 63];
	temp = 0;
	for (index = 0; index < len; index++)
		temp += (argv[1][index] * argv[1][index]);
	password[4] = codex[(temp ^ 239) & 63];
	for (index = 0; index < argv[1][0]; index++)
		temp = rand();
	password[5] = codex[(temp ^ 229) & 63];

	password[6] = '\0';
	printf("%s", password);
	return (0);
}
