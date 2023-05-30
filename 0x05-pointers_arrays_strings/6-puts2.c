#include"main.h"
/**
 * puts2 - prints every other character of a string
 * starting with the first character
 * followed by a new line
 * @str: string
 */
void puts2(char *str)
{
	int size = sizeof(str);
	int i;

	for (i = 0; i <= size; i++)
	{
		if (i % 2 != 0)
		{
			continue;
		}
		else
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}	
