#include "main.h"
#include <stdlib.h>

/**
 * _strdup - array for prints a string
 * @str: array of elements
 * Return: pointer
 */
char *_strdup(char *str)
{
	char  *p;
	int a = 0;
	int b = 1;

	if (str == NULL)
		return (NULL);
	while (str[b])
	{
		b++;
	}

	p = malloc((sizeof(char) * b) + 1);

	if (p == NULL)
		return (NULL);
	while (a < b)
	{
		p[a] = str[a];
		a++;
	}
	p[a] = '\0';
	return (p);
}
