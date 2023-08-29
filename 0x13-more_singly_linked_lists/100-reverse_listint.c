#include "lists.h"

/**
 * reverse_listint - Reverses a listint_t list.
 * @head: A pointer to the address of
 *        the head of the list_t list.
 *
 * Return: A pointer to the first node of the reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *ah, *bh;

	if (head == NULL || *head == NULL)
		return (NULL);

	bh = NULL;

	while ((*head)->next != NULL)
	{
		ah = (*head)->next;
		(*head)->next = bh;
		bh = *head;
		*head = ah;
	}

	(*head)->next = bh;

	return (*head);
}
