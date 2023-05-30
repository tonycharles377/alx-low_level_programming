#include"main.h"
/**
 * rev_string - reverses a string
 * @s: string
 */
void rev_string(char *s)
{
	int len1, len2, i;
	char temp;

	for (len1 = 0; s[len1] != '\0'; len1++)
	{
		continue;
	}

	len2 = len1 - 1;

	for (i = 0; i < len2; i++)
	{
		temp = s[i];
		s[i] = s[len2];
		s[len2--] = temp;
	}
}
