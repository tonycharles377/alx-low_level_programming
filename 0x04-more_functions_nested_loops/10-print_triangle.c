#include "main.h"
/**
 * print_triangle - prints a triangle, followed by a new line
 * @size: size of the triangle
 * If size is 0 or less print new line
 * Use the character # to print the triangle
 */
void print_triangle(int size)
{
	int row, space, hash;

	if (size <= 0)
		_putchar('\n');

	row = 1;
	while (row <= size)
	{
		space = 0;
		while (space < size - row)
		{
			_putchar(' ');
			space++;
		}
		hash = 0;
		while (hash < size - space)
		{
			_putchar('#');
			hash++;
		}
		row++;
		_putchar('\n');
	}
}
