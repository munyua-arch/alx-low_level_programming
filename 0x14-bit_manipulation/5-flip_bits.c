#include "main.h"

/**
 * flip_bits - number of bits you would need to flip
 * to get from one number to another
 * @n: parameter
 * @m: destiny
 * Return: nflips
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int a, flip = 0;
	unsigned long int b = sizeof(unsigned long int) * 8;

	for (a = 0; a < b; a++)
	{
		if ((m & 1) != (n & 1))
			flip += 1;
		n = n >> 1;
		m = m >> 1;
	}
	return (flip);
}
