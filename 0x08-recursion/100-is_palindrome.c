#include "main.h"
/**
 * _strlen_recursion - returns the length of a string
 * @s: the string to check
 * Return: the length
 */
int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s == '\0')
	{
		return (0);
	}
	i = (_strlen_recursion(s + 1));
	return (i + 1);
}

/**
 * firstletter_lasterletter - comparing first and last letters
 * @first: first letter
 * @last: last letter
 * Return: letters
 */

int firstletter_lasterletter(char *first, char *last)
{
	if (*first != *last)
	{
		return (0);
	}
	else if (first >= last)
	{
		return (1);
	}
	else
	{
		return (firstletter_lasterletter(first + 1, last - 1));
	}
}
/**
 * is_palindrome - checks if a word is palindrome
 * @s: string to be checked
 * Return: 1 is palindrome, 0 if not
 */
int is_palindrome(char *s)
{
	int len = _strlen_recursion(s);
	char *first;
	char *last;

	first = s;
	last = (s + len - 1);
	return (firstletter_lasterletter(first, last));
}
