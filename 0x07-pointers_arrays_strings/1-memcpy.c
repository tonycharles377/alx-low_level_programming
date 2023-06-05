#include"main.h"
#include<string.h>
/**
 * _memcpy - copies memory area
 * @dest: meomory area to copy to
 * @src: memory area to copy from
 * @n: number of bytes to be copied
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
