#include<stdlib.h>
/**
 * array_iterator - executes a function given as a parameter
 * on each element of an array
 * @array: array to be iterated
 * @size: size od array
 * @action: pointer_function_parameter
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
