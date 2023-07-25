#include "main.h"

/**
 * print_rev - print string in reverse
 * @s: variable
 * Return: void
 */
void print_rev(char *s)
{
	int k;

	while (*(s + k))
	{
		k++;

	}
	k--;
	while (k > 0)
	{
		_putchar(*(s + k));
		k--;
	}
	_putchar('\n');
}
