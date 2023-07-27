#include "main.h"

/**
 * reverse_array - reverses an array of integers
 * @a: array to be reversed
 * @n: number of elements in the array
 */

void reverse_array(int *a, int n)
{
	int a, b, tmp;

	a = n - 1;

	for (a = 0; a < n / 2; a++)
	{
		tmp = a[a];
		a[a] = a[b];
		a[b--] = tmp;
	}
}