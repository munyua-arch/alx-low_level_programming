#include <stdio.h>
#include <stdlib.h>

/**
 * main - function
 * @argc: length of argv
 * @argv: number of argument
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int array[] = {25, 10, 5, 2, 1};
	int a, b;
	int count = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	b = atoi(argv[1]);
	if (b < 0)
	{
		printf("0\n");
	}
	for (a = 0; a < 5; a++)
	{
		if (b >= array[a])
		{
			count += (b / array[a]);
			b = b % array[a];
		}
		if (b == 0)
		{
			printf("%d\n", count);
			break;
		}
	}
	return (0);
}
