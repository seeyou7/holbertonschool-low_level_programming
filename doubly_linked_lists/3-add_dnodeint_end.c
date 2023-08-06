#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a list
 *
 * @head: pointer of a pointer
 * @n: data in the node
 *
 * Return: the address of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newNode;

	newNode = malloc(sizeof(dlistint_t));
	if (!newNode)
	{
		free(newNode);
		return (NULL);
	}
	newNode->n = n;
	newNode->next = NULL;

	if (*head == NULL)
	{
		newNode->prev = NULL;
		*head = newNode;
	}
	else
	{
		dlistint_t *lastNode = *head;

		while (lastNode->next != NULL)
			lastNode = lastNode->next;
		lastNode->next = newNode;
		newNode->prev = lastNode;
	}
	return (newNode);

}
