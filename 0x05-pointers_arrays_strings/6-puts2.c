#include "main.h"
/**
 * puts2 - function should print only one character out of two
 * starting with the first one
 * @str: input
 * Return: print
 */
void puts2(char *str)
{
	int longer = 0;
	int k = 0;
	char *y = str;
	int l;

	while (*y != '\0')
	{
		y++;
		longer++;
	}
	k = longer - 1;
	for (l = 0; l <= k; l++)
	{
		if (l % 2 == 0)
	{
		_putchar(str[l]);
	}
	}
	_putchar('\n');
}
