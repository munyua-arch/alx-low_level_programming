#include "main.h"

/**
 * _memcpy -   copy number bytes form adress "from" to adress "to"
 * @dest: content is to be copied
 * @src: Source of data to be copied
 * @n: bytes of the memory
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int a;
	int b = n;

	for (a = 0; a < b; a++)
	{
		dest[a] = src[a];
		n--;
	}
	return (dest);
}
