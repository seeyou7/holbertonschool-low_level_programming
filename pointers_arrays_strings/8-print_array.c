#include "main.h"
#include <stdio.h>

/**
*print_array - prints n elements of an array of integers, followed \n.
*@n:  is the number of elements of the array to be printed
*@a: parameter of the function
*/

void print_array(int *a, int n)
{
	int x;

	for (x = 0; x < n; x++)
	{
		printf("%d", *a);
/*
*Print the current element of the array
*/
		if (x < (n - 1))
			printf(", ");
/*
*If it's not the last element, print a comma and space
* Move the pointer to the next element
*/
		a++;
	}
	printf("\n");
}
