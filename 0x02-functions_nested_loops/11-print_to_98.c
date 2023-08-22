#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints all natural numbers from n to 98
 * separate numbers by a comma, followed by a space
 * @n: number passed to function
 */
void print_to_98(int n)
{
	while (n <= 98)
	{
		if (n == 98)
			printf("%d\n", n);
		else
			printf("%d, ", n);
		n++;
	}
}
