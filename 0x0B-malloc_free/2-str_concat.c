#include "main.h"
/**
 * _strlen - count arrray
 * @s: array of elements
 * Return: i
 */

int _strlen(char *s)
{
	int a, count;

	a = 0;
	count = 0;

	while (s[a] != '\0')
	{
		count++;
		a++;
	}

	return (count);
}

/**
 * str_concat - back a pointer to array
 * @s1: Array one
 * @s2: Array two
 * Return: Always an array dinamic
 */

char *str_concat(char *s1, char *s2)
{
	char *p;
	int m, n, size;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	
	size = (_strlen(s1) + _strlen(s2) + 1);

	
	p = (char *) malloc(size * sizeof(char));

	if (p == 0)
	{
		return (NULL);
	}

	
	for (m = 0; *(s1 + m) != '\0'; m++)
		*(p + m) = *(s1 + m);

	for (n = 0; *(s2 + n) != '\0'; n++)
	{
		*(p + m) = *(s2 + n);
		m++;
	}

	return (m);
}
