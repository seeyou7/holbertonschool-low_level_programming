#include "main.h"
#include <stdlib.h>

/**
 *alloc_grid - function that returns a pointer to a 2
 *dimensional array of integers
 *@width: parameter of thr function
 *@height: parameter of the function
 *
 *Return: int
 */

int **alloc_grid(int width, int height)
{
	int **p;
	int i, j;

/* Check if either width or height is zero */
	if (width == 0 || height == 0)
		return (NULL);

 /* Allocate memory for the rows of the array */
	p = malloc(height * sizeof(*p));
	if (p == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
 /* Allocate memory for the columns of each row */
		p[i] = malloc(width * sizeof(int));
		if (p[i] == NULL)
		{
 /* Free previously allocated memory if allocation fails */
			for (j = 0; j < height; j++)
				free(p[j]);
			free(p);
			return (NULL);
		}
/* Initialize elements of each row to 0 */
		for (j = 0; j < width; j++)
		{
			p[i][j] = 0;
		}
	}
	return (p);
}
