#include "main.h"
/**
 *_isalpha - checks if a character is a letter
 *both upper and lower case
 *@c: takes input from other functions
 *Return: 1 if c is true else 0
 */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z' && c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
