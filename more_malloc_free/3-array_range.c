#include "main.h"
#include <stdlib.h>

/**
 *array_range -  function that creates an array of integers
 *@min: value
 *@max: value
 *
 *Return: int
 */

int *array_range(int min, int max)
{
	int *ptr;
	int resu = 0, i;


	if (min > max)
		return (NULL);

	resu = max - min + 1;
	ptr = malloc(sizeof(int) * resu);
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < resu; i++)
	{
		ptr[i] = min;
		min++;
	}
	return (ptr);
}
