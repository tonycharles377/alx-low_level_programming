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
			if (j == row - 10)
				_putchar('0' + result);
			else if (result < 10)
			{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar('0' + result);
			}
			else
			{
					_putchar(',');
					_putchar(' ');
					_putchar(result / 10 + '0');
					_putchar(result % 10 + '0');
			}
			j++;
		}
		_putchar('\n');
		i++;
	}
}
