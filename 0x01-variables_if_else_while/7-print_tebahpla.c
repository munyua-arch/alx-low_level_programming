#include <stdio.h>
#include <stdlib.h>
/**
 * main - Prints the alphabetic
 *
 * Return: Always (Success)
 */
int main(void)
{
	int n;

	for (n = 'z'; n >= 'a'; n--)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
