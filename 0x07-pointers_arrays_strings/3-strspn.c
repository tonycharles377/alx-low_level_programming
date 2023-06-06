/**
 * _strspn - gets the length of a prefix substring
 * @s: string
 * @accept: substring
 * Return: number of bytes in the initial segment of s
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j;
	int count = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				count++;
			}
		}
		if (s[i] != accept[0] &&
			s[i] != accept[1] &&
			s[i] != accept[2] &&
			s[i] != accept[3])
		{
			break;
		}
	}
	return (count);
}
