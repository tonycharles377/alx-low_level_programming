#include<stdlib.h>
/**
 * create_array - creates an array of chars
 * and initializes it with a specific char
 * @c: char to be initiolissed in the array
 * @size: size
 * Return: pointer to array else null
 */
char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	s = malloc(size * sizeof(char));
	if (s == NULL)
	{
		return (NULL);
	}

	i = 0;
	while (i < size)
	{
		*(s + i) = c;
		i++;
	}
	*(s + i) = '\0';
	return (s);
}
