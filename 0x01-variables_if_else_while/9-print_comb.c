#include <stdio.h>
/**
 * main - print posible combination
 *
 * 0, 1, 2, - , 9
 * use ',' and " " for eparation
 *
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		putchar(i + '0');

		if (i != 9)
		{
			putchar(',');
			putchar(" ");
		}
	}
	putchar('\n');
	return (0);
}
