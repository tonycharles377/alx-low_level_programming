#include <stdio.h>
/**
 *main - print lowercase alphabates
 *
 *use putchar
 *
 *Return: 0
 */
int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
