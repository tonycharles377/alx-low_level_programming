#include <stdio.h>
/**
 * main - finds and prints the sum of the even-valued terms
 * values should not exceed 4,000,000
 * Return: 0 (success)
 */
int main(void)
{
	int a = 1, b = 2, tmp, sum;

	while (a < 4000000 && b < 4000000)
	{
		if (a % 2 == 0)
			sum += a;
		if (b % 2 == 0)
			sum += b;
		tmp = a;
		a = tmp + b;
		b = a + b;
	}
	printf("%d\n", sum);
	return (0);
}
