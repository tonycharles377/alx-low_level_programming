#include <stdio.h>
/**
 * main -print alphabets
 *
 * dont print ch 'e' && ch 'q'
 *
 * print a new line
 *
 * Return: 0
 */
int main(void)
{
	int ch;

	ch = 'a';
	while (ch <= 'z')
	{
		if (ch != 'e' && ch != 'q')
		{
			putchar(ch);
		}
		ch++;
	}
	putchar('\n');
	return (0);
}
