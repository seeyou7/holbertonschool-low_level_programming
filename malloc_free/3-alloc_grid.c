#include "main.h"
#include <stdlib.h>

/**
  * alloc_grid - ...
  * @width: ...
  * @height: ...
  *
  * Return: ...
  */
int **alloc_grid(int width, int height)
{
	int w, h;
	int  **ptr;

	if (width <= 0 || height <= 0)
		return (0);
	ptr = malloc(sizeof(int *) * height);
	for (h = 0; h < height; h++)
	{
		ptr[h] = malloc(sizeof(int) * width);
		for (w = 0; w < h; w++)
		{
		if (ptr[h] == NULL)
		free(ptr[h]);
		}
	}
	for (h = 0; h < height; h++)
	{
	for (w = 0; w < width; w++)
	{
	ptr[h][w] = 0;
	}
	}
	return (ptr);
}
