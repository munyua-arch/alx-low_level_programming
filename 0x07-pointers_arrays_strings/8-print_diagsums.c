#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - the sum of the two diagonals of a square matrix of integers
 * @a: 2d array of chars
 * @size: number matrix
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int b, sum1, sum2;

	sum1 = 0;
	sum2 = 0;

	b = 0;
	while (b < size)
	{
		sum1 = sum1 + *(a + b * size + b);
		sum2 = sum2 + *(a + b * size + size - a -1);
		b++;
	}
	printf("%d, %d\n", sum1, sum2);
}
