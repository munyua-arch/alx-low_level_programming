#include "main.h"

/**
 * _strlen - returns length of a string
 * @s: variable
 * Return: return s
 */
int _strlen(char *s)
{
	int k = 0;

	while (*(s + k))
	{
		k++;
	}
	return (k);
}
