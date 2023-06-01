#include"main.h"
/**
 * _strncat - function that concatenates two strings
 * it will use at most n bytes from src
 * src does not need to be null-terminated if it contains n or more bytes
 * @dest: string 1
 * @src: strinh 2
 * @n: number of bytes
 * Return: a pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}

	j = 0;
	while (j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	return (dest);
}
