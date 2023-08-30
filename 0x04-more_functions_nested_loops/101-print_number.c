#include "main.h"
#include <limits.h>

/**
 * print_number - prints an integer
 * @n: number to print
 */
void print_number(int n)
{
	if (n == INT_MIN)
	{
		print_number(n / 10);
		_putchar('8');
	}
	else
	{
		if (n < 0)
		{
			_putchar('-');
			n = -n;
		}
		if (n / 10 != 0)
			print_number(n / 10);

		_putchar('0' + (n % 10));
	}
}
