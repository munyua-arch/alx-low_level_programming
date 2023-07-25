#include "main.h"

/**
 * puts2 - prints every other character of a string
 * starting with the first character, followed by a new line.
 * @str: variable
 * Return: void
 */
void puts2(char *str)
{
	int lon = 0;
	int k = 0;
	int l;
	char *y = str;

	while (*y != '\0')
	{
		y++;
		lon++;
	}
	k = lon - 1;
	for (l = 0; l <= k; k++)
	{
		if (l % 2 == 0)
		{
			_putchar(str[0]);
		}
	}
	_putchar('\n');	

}
