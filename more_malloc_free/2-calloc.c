#include "main.h"
#include <stdlib.h>


/**
 *_calloc - function that allocates memory for an array, using malloc
 *@nmemb: number member
 *@size: size of array
 *
 *Return: void
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int i;


/*Check if nmemb or size is 0*/
	if (nmemb == 0 || size == 0)
		return (NULL);

/*Allocate memory using malloc*/
	p = malloc(nmemb * size);

/*Check if malloc failed*/
	if (p == 0)
		return (NULL);

	for (i = 0; i < (nmemb * size); i++)
		p[i] = 0;

/*Return the pointer to the allocated memor*/
	return (p);
}
