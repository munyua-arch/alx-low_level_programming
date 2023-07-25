#include "main.h"

/**
 * rev_string - function to reverse a string
 * @s: variable
 * Return: void
 */
void rev_string(char *s)
{
	int count = 0;
	int k;
	char rev = s[0];

	while (s[counter] != '\0')
		counter++;
	for (k = 0; k < count; k++)
	{
		count--;
		rev = s[k];
		s[k] = s[counter];
		s[counter] = rev;
	}
}
