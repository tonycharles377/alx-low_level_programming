#include <stdio.h>
/**
 * main - finds and prints the first 98 Fibonacci numbers
 * not allowed to use long long, malloc, pointers,
 * arrays/tables, or structures
 * Return: 0 (success)
 */
int main(void)
{
	long int a = 1, b = 2, i, tmp;

	i = 0;
	while (i <= 48)
	{
		if (i == 48)
			printf("%ld, %ld\n", a, b);
		else
			printf("%ld, %ld, ", a, b);
		tmp = a;
		a = tmp + b;
		b = a + b;
		i++;
	}
	return (0);
}
