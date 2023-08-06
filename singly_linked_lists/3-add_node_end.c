#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: pointer to the head of the list
 * @str: string to be duplicated and added to the new node
 *
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
/*Function to add a new node with string data to the end*/
/* of the linked list*/
/*Create a new node and allocate memory for it*/
	list_t *new, *current;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);
/*DuplicateTheInput string using strdup & store it in the new node*/
	new->str = strdup(str);
	if (!new->str)
	{
/*If strdup fails to allocate memory for the duplicated*/
/*string free the new node and return NULL*/
		free(new);
		return (NULL);
	}
/*Calculate the length of the string and store it in the new node*/
	new->len = strlen(str);
/*Set the next pointer of the new node to NULL since*/
/* it will be added at the end of the list*/
	new->next = NULL;
/* If the linked list is empty (head points to NULL)*/
/*make the new node the first node in the list*/
	if (!*head)
		*head = new;
	else
	{
/*If the list is not empty,traverseThe list to find the last node*/
		current = *head;
		while (current->next)
			current = current->next;
/*Once we find the last node, set its next pointer to*/
/*the new node, effectively adding it to the end of the list*/
		current->next = new;
	}
	return (new);
}
