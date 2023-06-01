#include"main.h"
/**
 * _strncpy - copies a string
 * @dest: variable where string will be copied
 * @src: string to be copied
 * @n: number of bytes to be copied
 * Return: copied srting
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; (i < n) && (src[i] != '\0'); i++)
	{
		dest[i] = src[i];
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
