#include "lists.h"

/**
 * find_listint_loop - Finds the loop contained in
 *                     a listint_t linked list.
 * @head: A pointer to the head of the listint_t list.
 *
 * Return: If there is no loop - NULL.
 *         Otherwise - the address of the node where the loop starts.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *ptr, *hptr;

	if (head == NULL || head->next == NULL)
		return (NULL);

	ptr = head->next;
	hptr = (head->next)->next;

	while (hptr)
	{
		if (ptr == hptr)
		{
			ptr = head;

			while (ptr != hptr)
			{
				ptr = ptr->next;
				hptr = hptr->next;
			}

			return (ptr);
		}

		ptr = ptr->next;
		hptr = (hptr->next)->next;
	}

	return (NULL);
}
