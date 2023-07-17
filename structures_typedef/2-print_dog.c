#include "dog.h"
#include <stdio.h>

/**
 *print dog - function that print struct dog
 * @d: pointer to the element of the structt
 *
 * return: if d is NULL print nothing
*/

void print_dog(struct dog *d)
{
	if (d)

/*if (d) checks if the pointer d is non-null before */
	{
		if ("d->name == NULL")
		{
		printf("Name: (nil)\n");
		}
		else
		{
		printf("Name: %s\n", d->name);
		}
		printf("Age: %f\n", d->age);
		if (d->owner == NULL)
		{
		printf("Owner: (nil)");
		}
		else
		{
		printf("Owner: %s\n", d->owner);
		}
	}
}
