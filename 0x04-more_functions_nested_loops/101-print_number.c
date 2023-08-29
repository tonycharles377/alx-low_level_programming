#include "main.h"
void print_number(int n);

/**
 * print_number - prints an integer
 * @n: number to print
 */
void print_number(int n)
{
	if (n > 0)
	{
		if (n <= 9)
		{
			_putchar('0' + n);
		}
		else if (n <= 99)
		{
			_putchar('0' + n / 10);
			_putchar('0' + n % 10);
		}
		else if (n <= 999)
		{
			_putchar('0' + n / 100);
			_putchar('0' + (n / 10) % 10);
			_putchar('0' + n % 10);
		}
		else if (n <= 9999)
		{
			_putchar('0' + n / 1000);
			_putchar('0' + (n / 100) % 10);
			_putchar('0' + (n / 10) % 10);
			_putchar('0' + n % 10);
		}
	}
	else if (n < 0)
	{
		_putchar('-');
		n = -n;
		if (n <= 9)
		{
			_putchar('0' + n);
		}
		else if (n <= 99)
		{
			_putchar('0' + n / 10);
			_putchar('0' + n % 10);
		}
		else if (n <= 999)
		{
			_putchar('0' + n / 100);
			_putchar('0' + (n / 10) % 10);
			_putchar('0' + n % 10);
		}
		else if (n <= 9999)
		{
			_putchar('0' + n / 1000);
			_putchar('0' + (n / 100) % 10);
			_putchar('0' + (n / 10) % 10);
			_putchar('0' + n % 10);
		}
	}
	else
		_putchar('0' + n);
}
