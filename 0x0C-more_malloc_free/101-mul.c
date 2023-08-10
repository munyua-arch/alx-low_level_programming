#include "main.h"
#include <stdlib.h>

/**
 * _realloc - Reallocates a memory block using malloc and free.
 * @ptr: A pointer to the memory previously allocated.
 * @old_size: The size in bytes of the allocated space for ptr.
 * @new_size: The size in bytes for the new memory block.
 *
 * Return: If new_size == old_size - ptr.
 *         If new_size == 0 and ptr is not NULL - NULL.
 *         Otherwise - a pointer to the reallocated memory block.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *pointer;
	char *copy, *f;
	unsigned int a;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		pointer = malloc(new_size);

		if (pointer == NULL)
			return (NULL);

		return (pointer);
	}

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	copy = ptr;
	pointer = malloc(sizeof(*copy) * new_size);

	if (pointer == NULL)
	{
		free(ptr);
		return (NULL);
	}

	f = pointer;

	for (a = 0; a < old_size && a < new_size; a++)
		f[a] = *copy++;

	free(ptr);
	return (pointer);
}
