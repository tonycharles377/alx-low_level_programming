#include<stdarg.h>
#include<stdio.h>
/**
 * print_numbers - prints numbers, followed by a new line
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list;

	unsigned int i, num;

	if (separator == NULL)
	{
		return;
	}
	if (n == 0)
	{
		return;
	}
	va_start(list, n);
	for (i = 0; i < n; i++)
	{
		num = va_arg(list, int);
		if (i == n - 1)
		{
			printf("%d\n", num);
		}
		printf("%d%s", num, separator);
	}

	va_end(list);
}
