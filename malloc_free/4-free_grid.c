#include "main.h"
#include <stdlib.h>

/**
 *free_grid -  function that frees a 2 dimensional grid previously
 * created by your alloc_grid function
 *@grid: parameter of function
 *@height: parameter of the function
 *
 *Return: void
 */

void free_grid(int **grid, int height)
{
	int i;

/* Free memory for each row */
	for (i = 0; i < height; i++)
		free(grid[i]);
  /* Free memory for the rows array */
	free(grid);
}
