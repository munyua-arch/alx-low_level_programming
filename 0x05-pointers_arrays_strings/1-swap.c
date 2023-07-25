#include "main.h"

/**
 * swap_int - swaps value of a and b
 * @a: variable
 * @b: variable
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int k;

	k = *a;
	*a = *b;
	*b = k;
}
