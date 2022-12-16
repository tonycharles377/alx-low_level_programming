#include "main.h"
/**
 * _isupper - checks for uppercase character
 *
 * @c: input for alphabet
 *
 * Return: 1 if uppercase else retun 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
