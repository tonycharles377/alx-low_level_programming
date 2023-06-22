#include<stdio.h>
#include<stdlib.h>
#include"3-calc.h"
/**
 * main - calls a pointer function
 * @argc: number of arguments passed
 * @argv: arguments
 * Return: 0 success
 */
int main(int argc, char *argv[])
{
	int a, b, c, ans;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	a = atoi(argv[1]);
	b = *argv[2];
	c = atoi(argv[3]);
	if (b != '+' && b != '-' && b != '/' &&
			b != '*' && b != '%')
	{
		printf("Error\n");
		exit(99);
	}
	if ((b == '/' || b == '%') &&
			(a == 0 || c == 0))
	{
		printf("Error\n");
		exit(100);
	}

	ans = get_op_func(argv[2])(a, c);
	printf("%d\n", ans);

	return (0);
}
