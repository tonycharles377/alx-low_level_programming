#include "main.h"
/**
 * print_alphabet_x10 - entry point
 *
 * print an alphabet x10
 *
 * Return: 0
 */
void print_alphabet_x10(void)
{
	char c = 'a';
	int i = 0;

	while (i <= 9)
	{
		_putchar(c);
		i++;
	}
	_putchar('\n');
}
