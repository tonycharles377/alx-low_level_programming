#include<stdlib.h>
#include<stdio.h>
/**
 * malloc_checked - allocates memory using malloc
 * @b: number of bytes to be allocated
 * If malloc fails the malloc_checked function should cause
 * normal process termination with a status value of 98
 * Return: pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
