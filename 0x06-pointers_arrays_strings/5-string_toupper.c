#include"main.h"
#include<string.h>
#include<ctype.h>
/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @str: string
 * Return: string
 */
char *string_toupper(char *str)
{
	int i, len;

	len = strlen(str);

	for (i = 0; i < len; i++)
	{
		if (islower(str[i]))
		{
			str[i] = toupper(str[i]);
		}
	}
	return (str);
}
