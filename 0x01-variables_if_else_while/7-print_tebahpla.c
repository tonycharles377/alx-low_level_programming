#include <stdio.h>
/**
 * main - print alphabet char
 * from z - a in lowercase
 * use putchar function
 * end with a new line
 * Return: 0
 */
int main(void)
{
	int ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
