#include<stdlib.h>
#include"3-calc.h"
/**
 * get_op_func - selects the correct function to perform
 * operation asked by the user
 * @s: operator passed as argument to the program
 * Return: a pointer to the function that corresponds to the
 * operator given as a parameter
 */
int (*get_op_func(char *s))(int, int)
{
	int i;
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	i = 0;
	while (*s != '\0')
	{
		if (*s == *(ops[i].op) && s[1] == '\0')
		{
			return (ops[i].f);
		}
		i++;
	}
	return (NULL);
}
