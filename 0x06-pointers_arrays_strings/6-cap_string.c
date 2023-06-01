#include"main.h"
#include<string.h>
#include<ctype.h>
/**
 * cap_string - capitalizes all words of a string
 * @str: string
 * Return: string
 */
char *cap_string(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i == 0)
		{
			str[i] = toupper(str[i]);
		}
		else if (str[i] == ' ')
		{
			str[i + 1] = toupper(str[i + 1]);
		}
		else if (str[i] == '\t')
		{
			str[i + 1] = toupper(str[i + 1]);
		}
		else if (str[i] == '\n')
		{
			str[i + 1] = toupper(str[i + 1]);
		}
		else if (str[i] == '.')
		{
			str[i + 1] = toupper(str[i + 1]);
		}

		else
		{
			str[i] = str[i];
		}
	}
	return (str);
}
