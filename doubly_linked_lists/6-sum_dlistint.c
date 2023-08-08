#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data of a linked list
 *
 * @head: pointer to head
 *
 * Return: the sum of all the data
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
