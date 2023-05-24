#include"main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @n: number from which last digit is printed from
 * Return: value of last digit
 */
int print_last_digit(int n)
{
	int l;

	if (n < 0)
		n = -n;

	l = n % 10;

	if (l < 0)
		l = -l;
	_putchar(l + '0');
	return (l);
}
