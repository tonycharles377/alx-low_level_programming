#include <stdio.h>
#include "main.h"
/**
 * main - prints sum of multiples of 3 and 5
 * below 1024(excluded), followed by a new line
 * Return: 0 (success)
 */
int main(void)
{
	int n, sum;

	n = 1;
	sum = 0;
	while (n < 1024)
	{
		if (n % 3 == 0 && n % 5 == 0)
			sum += n;
		else if (n % 3 == 0)
			sum += n;
		else if (n % 5 == 0)
			sum += n;
		n++;
	}
	printf("%d\n", sum);
	return (0);
}
