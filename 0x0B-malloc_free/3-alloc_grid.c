#include "main.h"
#include <stdlib>

/**
 * alloc_grid - creates a 2-dimensional array of integers
 * @width: width of array
 * @height: height of array
 *
 * Return: NULL if width or height = 0 or negative
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **h;

	if (width <= 0 || height <= 0)
		return (NULL);
	h = (int **)malloc(sizeof(int *) * height);
	if (h == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		h[i] = (int *)malloc(sizeof(int) * width);
		if (h[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(h[j]);
			free(h);
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			h[i][j] = 0;
		}
	}
	return (h);
}
