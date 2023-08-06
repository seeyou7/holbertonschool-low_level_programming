#include "lists.h"

/**
 * dlistint_len- returns the number of elements in a linked listint_t list.
 *
 * @h: pointer to head
 *
 * Return: the number of elements in a linked list
 */

size_t dlistint_len(const dlistint_t *h)
{
	int i;

	for (i = 0; h != NULL; i++)
	{
		h = h->next;
	}
	return (i);
}
