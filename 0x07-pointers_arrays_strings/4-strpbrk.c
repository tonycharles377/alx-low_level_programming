/**
 * _strpbrk - searches a string for any of a set of bytes
 * _strpbrk() function locates the first occurrence in the string s
 * of any of the bytes in the string accept
 * @s: string
 * @accept: string
 * Return: a pointer to the byte in s
 */
char *_strpbrk(char *s, char *accept)
{
	char *tmp;

	while (*s != '\0')
	{
		tmp = accept;
		while (*tmp != '\0')
		{
			if (*s == *tmp)
			{
				return (s);
			}
			tmp++;
		}
		s++;
	}
	return ('\0');
}
