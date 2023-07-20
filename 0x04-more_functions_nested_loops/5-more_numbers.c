#include "main.h"

/**
 * more_numbers - prints 10 times the numbers from 0 to 14
 */

void more_numbers(void)
{
	int i;
	int j;

	for (i = 0; i < 10; i++)
	{

		for (j = 0; j < 15; i++)
		{
			if (j >= 10)
			{
				_putchar(y / 10 + 48);
			}
			_putchar(y % 10 + 48);
		}
		_putchar('\n');
	}
}
