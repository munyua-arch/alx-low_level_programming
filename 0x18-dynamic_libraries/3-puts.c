#include "main.h"

/**
 * _puts - prints a string followed by new line
 * @str: variable
 * Return: void
 */
void _puts(char *str)
{
	int k = 0;

	while (*(str + k))
	{
		_putchar(*(str + k));
		k++;
	}
	_putchar('\n');
}
