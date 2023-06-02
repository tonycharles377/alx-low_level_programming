#include"main.h"
/**
 * rot13 - encodes a string using rot13
 * use if statement once in your code
 * only use two loops in your code
 * not allowed to use switch
 * not allowed to use any ternary operation
 * @s: string
 * Return: encoded string
 */
char *rot13(char *s)
{
	char s1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char s2[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; s1[j] != '\0'; i++)
		{
			if (s[i] == s1[j])
			{
				s[i] = s2[j];
				break;
			}
		}
	}
	return (s);
}
