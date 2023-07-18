#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 * Return: nothing
 */
void times_table(void)
{
	int i, result;

	for (i = 0; i < 10; i++)
	{
		result = 9 * i;
		_putchar(i);
	}
}
