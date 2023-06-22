#include<stdio.h>
#include<stdarg.h>
/**
 * print_strings - prints strings, followed by a new line
 * @separator: string to be printed between the strings
 * @n: number of strings passed to the function
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list;

	unsigned int i;
	char *ch;

	if (!separator)
	{
		separator = "";
	}

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		ch = va_arg(list, char *);
		if (i == n - 1)
		{
			printf("%s\n", ch);
		}
		else if (ch == NULL)
		{
			printf("(nil)%s", separator);
		}
		else
		{
			printf("%s%s", ch, separator);
		}
	}
	va_end(list);
}

