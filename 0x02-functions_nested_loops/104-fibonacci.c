#include <stdio.h>
/**
 * main - finds and prints the first 98 Fibonacci numbers
 * not allowed to use long long, malloc, pointers,
 * arrays/tables, or structures
 * Return: 0 (success)
 */
int main(void)
{
	unsigned long int a = 1, b = 2, i, tmp;

	printf("%lu, %lu ,", a, b);
	i = 2;
	while (i < 98)
	{
		tmp = a;
		a = b;
		b = tmp + b;

		if (i == 97)
			printf("%lu\n", b);
		else
			printf("%lu, ", b);
		i++;
	}
	return (0);
}
