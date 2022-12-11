#include <stdio.h>
/**
 * main - print Hexadecimal number
 *
 * use putchar function
 *
 * followed by new line
 *
 * Return: 0
 */
int main(void)
{
	int i;
	char ch;

	for (i = 0; i <= 9; i++)
	{
		putchar(i + '0');
	}

	for (ch = 'a'; ch <= 'f'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
