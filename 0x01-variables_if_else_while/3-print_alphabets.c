#include <stdio.h>
/**
 * main - print alphabets
 *
 * in lower and upper case
 *
 * use putchar function
 *
 * Return 0
 */
int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}

	for (ch = 'A'; ch <= 'Z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
