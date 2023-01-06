#include "main.h"

/**
 * is_prime_number - checking if the number is prime
 * @n: number ot be checked
 * Return: 1 if prime, o if not
 */
int is_prime_number(int n)
{
	int i = 2;

	if (n <= 1)
	{
		return (0);
	}
	else if ((n % i) == 0)
	{
		return (0);
	}
	else if ((i * i) > n)
	{
		return (1);
	}
	else
	{
		return (is_prime_number(i + 1));
	}
}
