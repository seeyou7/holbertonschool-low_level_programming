#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index of a linked list
 *
 * @head: pointer of a pointer
 * @index: index of the node that should be deleted
 *
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *delNode;

	delNode = *head;
	if (delNode == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		if (*head != NULL)
			(*head)->prev = NULL;
	}
	else
	{
		while (index > 0)
		{
			if (delNode == NULL)
				return (-1);
			delNode = delNode->next;
			index--;
		}

		delNode->prev->next = delNode->next;
		if (delNode->next != NULL)
			delNode->next->prev = delNode->prev;
	}
	free(delNode);
	return (1);
}
