#include "main.h"

/**
 * print_most_numbers - prints lower case alphabet
 * Return: void
 */

void print_most_numbers(void)
{
	char i;

	for (i = 48; i < 58; i++)
	{
		if (i == 50 || i == 52)
		{
			continue;
		}
		_putchar(i);
	}
	_putchar('\n');
}
