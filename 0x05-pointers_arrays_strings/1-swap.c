#include "main.h"
/**
 * swap_int - main entry point
 *
 * swap the value of two int
 *
 * @a: int to swap
 *
 * @b: int to swap
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int i;

	i = *a;
	*a = *b;
	*b = i;
}
