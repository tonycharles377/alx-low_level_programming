#include <stdio.h>
/**
 * main - print all single digit base 10 numbers
 *
 * 0 - 9
 *
 * followed by a new line
 *
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		printf("%d", i);
	}
	printf("\n");
	return (0);
}
