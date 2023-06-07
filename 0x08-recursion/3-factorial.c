/**
 * factorial - returns the factorial of a given number
 * @n: int
 * if n < 0 factorial is -1
 * if n == 0 factorial is 1
 * Return: facorial of n
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	if (n > 0)
	{
		return (n * factorial(n - 1));
	}
	return (n);
}
