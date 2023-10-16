
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
	/*Declaring variables*/
	int c;
	int sum1, sum2;

	sum1 = 0;
	sum2 = 0;

	c = 0;
	while (c < size) /*number repetitions*/
	{
		/*sums for diagsums*/
		sum1 = sum1 + *(a + c * size + c);
		sum2 = sum2 + *(a + c * size + size - c - 1);

		c++;
	}
	printf("%d, %d\n", sum1, sum2);
}
