#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list
 *@head: pointer to the head of the list
 *@str: string to be added
 *
 * Return: returns the address to the new element or NULL
 * if failed
*/

list_t *add_node(list_t **head, const char *str)
{
	list_t *added;
	char *dup;
	int len;

	added = malloc(sizeof(list_t));
	if (added == NULL)
		return (NULL);

	dup = strdup(str);
	if (dup == NULL)
	{
		free(added);
		return (NULL);
	}
	for (leng = 0; str[len];)
		len++;

	added->str = duplicate;
	added->length = length;
	added->next = *head;

	*head = added;

	return (added);

}
