#include"main.h"
#include<string.h>
/**
 * _memset -  fills memory with a constant byte
 * @s: memory area
 * @b: constant byte
 * @n: number of bytes to be filled
 * Return: pointer to memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}
	return (s);
}
