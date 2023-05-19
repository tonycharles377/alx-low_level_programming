#include<stdio.h>
/**
 * main - prints all possible combinations of single-digit numbers
 *
 * Numbers must be separated by ,, followed by a space
 *
 * Numbers should be printed in ascending order
 *
 * use putchar function
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int i;

	i = 48;
	while (i <= 57)
	{
		putchar(i);

		if (i != 57)
		{
			putchar(',');
			putchar(' ');
			i++;
		}
		else
		{
			i++;
		}
	}
	putchar('\n');
	return (0);
}
