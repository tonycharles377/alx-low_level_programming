#include "main.h"
/**
 * print_alphabet - entry point
 *
 * print alphabets in lowercase
 *
 * use _putchar function
 *
 * Return: 0
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a';  c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
