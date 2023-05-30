#include"main.h"
#include<string.h>
/**
 * puts_half - prints half of a string, followed by a new line
 * @str: string to be printed
 */
void puts_half(char *str)
{
	int sln1, n;

	sln1 = strlen(str);
	n = (sln1 - 1) / 2;

	while (n <= sln1)
	{
		n++;
		_putchar(str[n]);
	}
	_putchar('\n');
}
