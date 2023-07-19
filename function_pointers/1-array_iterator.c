#include "function_pointers.h"
#include <stddef.h>

/**
 *array_iterator - fun that execute a func given as para
 *@array: parameter of the func
 *@size: size of the arr to iterate
 *@action: pointer to a func
 *
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array != 0 && action != 0)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}


