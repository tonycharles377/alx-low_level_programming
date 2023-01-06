#include "main.h"

/**
 * nat_root - tracking number
 * @n: number
 * @i: numbers to be multiply
 * Return: number
 */
int nat_root(int i, int n)
{
	if (i * i == n)
	{
		return (i);
	}
	else if ((i * i) > n)
	{
		return (-1);
	}
	else
	{
		return (nat_root(i + 1, n));
	}
}

/**
 * _sqrt_recursion - returns the natural square root
 * @n: number ot be checked
 * Return: numbers that have natural square root
 */
int _sqrt_recursion(int n)
{
	int i = 0;

	n = nat_root(i, n);
	return (n);
}
