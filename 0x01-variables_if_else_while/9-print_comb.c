#include <stdio.h>

/**
  * main - Prints a hexadecimal string
  *
  * Return: Always (Success)
  */
int main(void)
{
	char z;

	for (z = '0'; z <= '9'; z++)
	{
		putchar(z);
	}

	for (z = 'a'; z <= 'f'; z++)
	{
		putchar(z);
	}

	putchar('\n');

	return (0);
}
