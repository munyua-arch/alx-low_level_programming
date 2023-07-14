#include <stdio.h>

/**
  * main - Prints a serie of numbers with commas
  *
  * Return: Always (Success);
  */
int main(void)
{
	int k;

	for (k = '0'; k <= '9'; k++)
	{
		putchar(k);

		if (k != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
