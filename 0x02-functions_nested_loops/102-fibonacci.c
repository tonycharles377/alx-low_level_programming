#include <stdio.h>
/**
 * main - prints the first 50 Fibonacci numbers
 * starting with 1 and 2
 * numbers must be separated by comma, followed by a space
 * Return: 0 (success)
 */
int main(void)
{
	int a = 1, b = 2, i, tmp;

	i = 3;
	while (i <= 50)
	{
		if (i == 50)
			printf("%d, %d\n", a, b);
		else
			printf("%d, %d, ", a, b);
		tmp = a;
		a = tmp + b;
		b = a + b;
		i++;
	}
	return (0);
}
