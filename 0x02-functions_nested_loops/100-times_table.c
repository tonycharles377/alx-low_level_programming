#include "main.h"
void print_times_table(int n);

/**
 * print_times_table - prints the n times table
 * @n: number passed to function
 * if n > 15 or n < 0  the function should not print anything
 */
void print_times_table(int n)
{
	int row = n + 1, col = n + 1;
	int i, j, result;

	if (n >= 0 && n <= 15)
	{
		i = 0;
		while (i < col)
		{
			j = 0;
			while (j < row)
			{
				result = i * j;
				if (j == 0)
					_putchar('0' + result);
				else if (result < 10)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar('0' + result);
				}
				else if (result > 9 && result < 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar('0' + result / 10);
					_putchar('0' + result % 10);
				}
				else
				{
					_putchar(',');
					_putchar(' ');
					_putchar('0' + result / 100);
					_putchar('0' + (result / 10) % 10);
					_putchar('0' + result % 10);
				}
				j++;
			}
			_putchar('\n');
			i++;
		}
	}

}
