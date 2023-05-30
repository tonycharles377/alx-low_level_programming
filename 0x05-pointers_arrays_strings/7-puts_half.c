#include"main.h"
#include<string.h>
/**
 * puts_half - prints half of a string, followed by a new line
 * @str: string to be printed
 */
void puts_half(char *str)
{
	int sln, n, i;

	sln = strlen(str);

	if (sln % 2 == 1)
	{
		n = (sln / 2) + 1;
	}
	else
	{
		n = sln / 2;
	}

	for (i = n; i <= sln; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
