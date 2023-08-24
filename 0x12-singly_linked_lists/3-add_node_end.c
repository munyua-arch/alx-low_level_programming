#include "lists.h"

/**
 * add_node_end - Adds a new node at the end of a list
 *@head: pointer to the head of the list
 *@str: string to be added to the list
 *
 *Return: NULL in case of failure
 *or address or the element
*/

list_t *add_node_end(list_t **head, const char *str)
{
	char *duplicate;
	int len;
	list_t *added, *last;

	added = malloc(sizeof(list_t));
	if (added == NULL)
		return (NULL);

	duplicate = strdup(str);
	if (str == NULL)
	{
		free(added);
		return (NULL);
	}

	for (len = 0; str[len];)
		len++;

	added->str = duplicate;
	added->len = len;
	added->next = NULL;

	if (*head == NULL)
		*head = added;
	else
	{
		last = *head;
		while (last->next != NULL)
			last = last->next;
		last->next = added;
	}
	return (*head);
}
