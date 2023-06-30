#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - printing the sum of two diagonals
 * @a: array values
 * @size: size of the matrix
 * Return: Always 0.
 */
void print_diagsums(int *a, int size)
{

	int	i;
	int	rx;
	int	ry;

	rx = 0;
	ry = 0;
	for (i = 0; i < size; i++)
	{
		rx += a[(size + 1) * i];
		ry += a[(size - 1) * (i + 1)];
	}
	printf("%d, %d\n", rx, ry);
}
