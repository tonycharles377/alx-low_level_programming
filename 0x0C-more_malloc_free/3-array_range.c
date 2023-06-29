#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: min number of arrays
 * @max: maximum number of array
 * Return: pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int *arr, i = 0;

	if (min > max)
		return (NULL);

	arr = malloc(((max - min) + 1) * sizeof(int));
	if (arr == NULL)
		return (NULL);

	while (min < max + 1)
	{
		arr[i] = min;
		i++;
		min++;
	}
	return (arr);
}
