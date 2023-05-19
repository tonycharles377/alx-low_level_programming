#include<stdio.h>

/**
 * main - prints the alphabet in lowercase
 * followed by a new line
 *
 * Return: Always 0 (succsess)
 */
int main(void)
{
	char i;

	i = 'a';
	while (i <= 'z')
	{
		putchar(i);
		i++;
	}
	putchar('\n');

	return (0);
}
