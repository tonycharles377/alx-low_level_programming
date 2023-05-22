#include<stdio.h>
/**
 * main - entry point
 * prints all possible combinations of two two-digit numbers
 * range from 0 to 99
 * The two numbers should be separated by a space
 * combination of numbers must be separated by comma, followed by a space
 * use putchar eight times maximum in your code
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int num1, num2;

	for (num1 = 0; num1 < 99; num1++)
	{
		for (num2 = num1 + 1; num2 < 100; num2++)
		{
			putchar(num1 / 10 + '0');
			putchar(num1 % 10 + '0');
			putchar(' ');
			putchar(num2 / 10 + '0');
			putchar(num2 % 10 + '0');

			if (num1 == 98 && num2 == 99)
				continue;

			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
