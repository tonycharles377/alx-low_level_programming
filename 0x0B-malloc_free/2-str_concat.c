#include<string.h>
#include<stdlib.h>
/**
 * str_concat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * if NULL is passed, treat it as an empty string
 * The function should return NULL on failure
 * Return: pointer to concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	char *p;
	size_t size, i, newi;

	size = (strlen(s1) + strlen(s2) + 1);

	p = malloc(size * sizeof(char));

	if (p == NULL)
	{
		return (NULL);
	}

	if (s1 == NULL)
	{
		return ("");
	}
	else
	{
		i = 0;
		while (s1[i] != '\0')
		{
			p[i] = s1[i];
			i++;
		}
	}
	
	if (s2 == NULL)
	{
		return ("");
	}
	else
	{
		newi = 0;
		while (s2[newi] != '\0')
		{
			p[i] = s2[newi];
			newi++;
			i++;
		}
		p[i] = '\0';
	}
	return (p);
}
