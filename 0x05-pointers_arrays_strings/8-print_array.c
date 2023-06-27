#include <stdio.h>
/**
 * print_array - prints elements of array
 * @a: array
 * @n: size of array
 */
void print_array(int *a, int n)
{
	int i;

	if (n < 1)
		return;
	for (i = 0; i < n; i++)
	{
		if (i == (n - 1))
			printf("%d\n", a[i]);
		else
			printf("%d, ", a[i]);
	}
}
