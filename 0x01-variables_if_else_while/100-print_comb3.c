#include<stdio.h>
/**
 * main - entry point
 * prints all possible different combinations of two digits
 * Numbers must be separated by , followed by a space
 * The two digits must be different
 * you can only use putchar five times maximum in your code
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int i;
	int j;

	i = 48;
	j = 49;

	while (i < 57 && j < 58)
	{
		putchar(i);
		putchar(j);

		if (i == 56 && j == 57)
		{
			putchar('\n');
			i++;
			j++;
		}
		else
		{
			putchar(',');
			putchar(' ');

			if (j < 57)
			{
				j++;
			}
			else
			{
				i++;
				j = 1 + i;
			}
		}
	}
	return (0);
}
