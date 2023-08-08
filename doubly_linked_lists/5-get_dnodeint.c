#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a linked list
 *
 * @head: pointer to head
 * @index: index of the node
 *
 * Return: the nth node of a linked list
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *nthNode = head;
	unsigned int i;

	if (nthNode == NULL)
		return (NULL);

	for (i = 0; i < index && nthNode != NULL; i++)
		nthNode = nthNode->next;

	return (nthNode);

}
