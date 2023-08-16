#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints its own opcodes
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int b, a;
	char *p;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	b = atoi(argv[1]);

	if (b < 0)
	{
		printf("Error\n");
		exit(2);
	}

	p = (char *)main;

	for (a = 0; a < b; a++)
	{
		if (a == b - 1)
		{
			printf("%02hhx\n", p[a]);
			break;
		}
		printf("%02hhx ", p[a]);
	}
	return (0);
}
