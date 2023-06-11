#include"main.h"
/**
 * print_square - prints a square
 * use only _putchar function to print
 * @size: size of square
 * If size is 0 or less, the function should print only a new line
 * Use the character # to print the square
 */
void print_square(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
	}
	for (i = 1; i <= size; i++)
	{
		for (j = 1; j <= size; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
