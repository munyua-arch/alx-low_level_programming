#include "main.h"

/**
 * _isupper - function that checks for uppercase character
 * @c: Variable
 * return 1 if c is uppercase otherwise
 * Return: 0
 */

int _isupper(int c)
{
	char upp;

	upp = c;

	if (upp >= 65 && upp <= 95 )
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
