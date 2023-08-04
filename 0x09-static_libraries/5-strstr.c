#include "main.h"

/**
 * _strstr - first occurrence of the substring needle in the string haystack
 * @haystack: main str to be examined
 * @needle: searched in haystack
 * Return: return 0
 */

char  *_strstr(char *haystack, char *needle)
{
	char *p, *q;

	while (*haystack != '\0')
	{
		p = haystack;
		q = needle;

		while (*haystack != '\0' && *q != '\0' && *haystack == *q)
		{
			haystack++;
			q++;
		}
		if (*q == '\0')
			return (p);
		haystack = p + 1;
	}
	return (0);
}
