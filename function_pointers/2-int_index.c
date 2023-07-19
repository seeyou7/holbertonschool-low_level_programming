#include "function_pointers.h"
#include <stddef.h>

/**
 *int_index - that searches for an integer
 *@array: parameter of the func
 *@size: size of the arr to iterate
 *@cmp: pointer to a func
 *
 * Return: int
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array != 0 && size != 0 && cmp != 0)
		for (i = 0; i < size; i++)
		{
			if ((cmp)(array[i]) != 0)
			{
				return (i);
			}
		}
	return (-1);
}
