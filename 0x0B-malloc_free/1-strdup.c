#include<string.h>
#include<stdlib.h>
/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * which contains a copy of the string given as a parameter
 * @str: string to be duplicated
 * Returns NULL if str = NULL
 * Return: a pointer to the duplicated string else NULL if it failes
 */
char *_strdup(char *str)
{
	char *p;
	size_t i;
	size_t size;

	if (str == NULL)
	{
		return (NULL);
	}

	size = strlen(str) + 1;
	p = malloc(size * sizeof(char));

	if (p == NULL)
	{
		return (NULL);
	}

	i = 0;
	while (i < size)
	{
		p[i] = str[i];
		i++;
	}
	p[i] = '\0';
	return (p);
}
