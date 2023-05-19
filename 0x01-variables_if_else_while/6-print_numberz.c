#include<stdio.h>
/**
 * main - prints all single digit numbers of base 10 starting from 0
 *
 * you are not allowed to use any variable of type char
 *
 * use only putchar function twice
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
	}

	putchar('\n');
	return (0);
}
