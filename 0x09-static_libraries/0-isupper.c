#include "main.h"

/**
 * _isupper - function that checks for uppercase character
 * @c: Variable
 * return 1 if c is uppercase otherwise
 * Return: 0
 */

int _isupper(int c)
{
	char upper;

	upper = c;

	if (upper >= 65 && upper <= 90)
	{
		return (1);
	}
	return (0);
	_putchar('\n');
}
