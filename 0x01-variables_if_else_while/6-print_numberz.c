#include <stdio.h>
/**
 * main - print single digit int
 *
 * dont use variable char
 *
 * only use putchar function
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
		/*converts i to ASCII representation*/
		putchar(i + '0');
	}
	putchar('\n');
	return (0);
}
