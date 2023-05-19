#include<stdio.h>
/**
 * main - prints the lowercase alphabet in reverse
 *
 * followed by a new line
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char i;

	i = 'z';
	while (i >= 'a')
	{
		putchar(i);
		i--;
	}
	putchar('\n');
	return (0);
}
