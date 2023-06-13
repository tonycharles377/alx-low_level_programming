#include<stdlib.h>
/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: width of array
 * @height: height of array
 * Each element of the grid should be initialized to 0
 * function should return NULL on failure
 * return NULL If width or height is 0 or negative
 * Return: pointer to a 2 dimensinal array
 */
int **alloc_grid(int width, int height)
{
	int **p;
	int size, i, j;

	if ((width <= 0) || (height <= 0))
	{
		return (NULL);
	}
	
	p = malloc(height * sizeof(int *));
	if (p == NULL)
	{
		return (NULL);
	}
	
	for (i = 0; i < height; i++)
	{
		p[i] = malloc(width * sizeof(int));
		if (p[i] == NULL)
		{
			return (NULL);
		}
	}
	
	i = 0;
	while (i < height)
	{
		j = 0;
		while (j < width)
		{
			p[i][j] = 0;
			j++;
		}
		i++;
	}
	return (p);
}
