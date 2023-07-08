#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flip
 * to get from one number to another
 * @n: int 1
 * @m: int 2
 * Return: number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int result, count = 0;

	result = n ^ m;
	while (result > 0)
	{
		count += (result & 1);
		result >>= 1;
	}
	return (count);
}
