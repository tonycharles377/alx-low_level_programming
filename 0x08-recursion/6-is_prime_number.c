/**
 * is_prime_number - checks for prime numbers
 * @n: integer to be checked
 * Return: 1 if n is prime number, otherwise return 0
 */
int is_prime_number(int n)
{
	int i = 2;

	if (n <= 1)
	{
		return (0);
	}
	if (n == 2)
	{
		return (1);
	}
	if ((n % i) == 0)
	{
		return (0);
	}
	if ((i * i) > n)
	{
		return (1);
	}
	else
	{
		return (is_prime_number(i + 1));
	}
}
