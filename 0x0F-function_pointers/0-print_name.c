#include<stdlib.h>
/**
 * print_name - prints a name
 * @name: argument 1
 * @f: argument 2
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL)
	{
		return;
	}
	if (f == NULL)
	{
		return;
	}
	f(name);
}
