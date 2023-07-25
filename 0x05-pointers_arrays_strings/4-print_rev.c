#include "main.h"

/**
 * print_rev - print string in reverse
 * @s: variable
 * Return: void
 */
void print_rev(char *s)
{
	int k = 0;
	int l;

	while (*s != '\0')
	{
		k++;
		s++;
	}
	s--;
	for (l = k; l > 0; l--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
