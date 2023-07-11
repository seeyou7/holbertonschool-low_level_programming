#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
  *create_array - function to create array using malloc
  * @size: unsigned int the size to allocate
  *@c: parameter of the function
  * Return: pointer to the array or NULL if it fails
  */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ptr;

		if (size == 0)
		{
			return (NULL);
		}
	ptr = (char *)malloc(sizeof(char) * size);
		if (ptr == 0)
		{
			return (0);
		}
	for (i = 0; i < size; i++)
		ptr[i] = c;
	return (ptr);
}
