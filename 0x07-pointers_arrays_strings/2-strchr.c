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
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return ('\0');
}
