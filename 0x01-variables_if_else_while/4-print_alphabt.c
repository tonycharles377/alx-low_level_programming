#include<stdio.h>
/**
 * main - prints the alphabet in lowercase, followed by a new line
 *
 * Print all the letters except q and e
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char i = 'a';

	while (i <= 'z')
	{
		if (i != 'q' && i != 'e')
			putchar(i);

		i++;
	}
	putchar('\n');

	return (0);
}
