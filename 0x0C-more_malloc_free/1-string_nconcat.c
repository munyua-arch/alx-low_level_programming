#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates n bytes of a string to another string
 * @s1: string to append to
 * @s2: string to concatenate from
 * @n: number of bytes from s2 to concatenate to s1
 * Return: pointer to the resulting string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	int a = 0, b = 0, length1 = 0, length2 = 0;

	while (s1 && s1[length1])
		length1++;
	while (s2 && s2[length2])
		length2++;
	if (n < length2)
		p = malloc(sizeof(char) * (length1 + n + 1));
	else
		p = malloc(sizeof(char) * (length1 + length2 + 1));

	if (!p)
		return (NULL);

	while (a < length1)
	{
		p[a] = s1[a];
		a++;
	}

	while (n < length2 && a < (length1 + n))
		p[a++] = s2[b++];

	while (n >= length2 && a < (length1 + length2))
		p[a++] = s2[b++];

	p[a] = '\0';

	return (p);
}
