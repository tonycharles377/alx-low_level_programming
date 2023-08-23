#include <stdio.h>
/**
 * main - prints the first 50 Fibonacci numbers
 * starting with 1 and 2
 * numbers must be separated by comma, followed by a space
 * Return: 0 (success)
 */
int main(void)
{
	long int a = 1, b = 2, i, tmp;

	i = 1;
	while (i <= 25)
	{
		if (i == 25)
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
