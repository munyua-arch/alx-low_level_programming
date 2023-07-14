#include <stdio.h>
#include <stdlib.h>
/**
 * main - Prints if number is positive, zero or negative
 *
 * Return: Always (Success)
 */
int main(void)
{
	int n;
	int m;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	m =  n % 10;

	if (m > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n");
	}
	else if (m == 0)
	{
		printf("Last digit of %d is %d and is 0\n");
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n");
	}
	return (0);
}
