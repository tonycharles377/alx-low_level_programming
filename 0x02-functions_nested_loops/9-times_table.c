#include <stdlib.h>
#include "main.h"
void times_table(void);
/**
 * times_table - prints the 9 times table, starting with 0
 */
void times_table(void)
{
	int col = 10, row = 10, i, j, result;

	i = 0;
	while (i < col)
	{
		j = 0;
		while (j < row)
		{
			result = i * j;
			if (result < 10)
			{
				if (j == row - 1)
					_putchar('0' + result);
				else
				{
					_putchar('0' + result);
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
			}
			else
			{
				if (j == row - 1)
				{
					_putchar(result / 10 + '0');
					_putchar(result % 10 + '0');
				}
				else
				{
					_putchar(result / 10 + '0');
					_putchar(result % 10 + '0');
					_putchar(',');
					_putchar(' ');
				}
			}
			j++;
		}
		_putchar('\n');
		i++;
	}
}
