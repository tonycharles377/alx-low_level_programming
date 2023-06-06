#include"main.h"
#include<string.h>
/**
 * _strchr - locates a character in a string
 * @s: string
 * @c: char to be located
 * Return: pointer to the matched char or NULL if not found
 */
char *_strchr(char *s, char c)
{
	int a;

	while (1)
	{
		a = *s++;
		if (a == c)
		{
			return (s - 1);
		}
		if (a == 0)
		{
			return ('\0');
		}
	}
}
