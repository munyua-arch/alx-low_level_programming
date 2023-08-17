#include <stdio.h>
#include "variadic_functions.h"

/**
 * sum_them_all - adds num
 * @n: param
 * Return: int
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;

	va_start(args, n);

	int a, sum = 0;

	if (n == 0)
		return (0);

	for (a = 0; a < n; a++)
	{
		sum += va_arg(args, int);
	}

	return (sum);
}
