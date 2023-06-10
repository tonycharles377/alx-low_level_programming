#include<stdio.h>
/**
 * main - prints number of arguments passed
 * @argc: number of arguments passed
 * @argv: array of argc
 * return: 0
 */
int main(int argc, char **argv)
{
	(void)**argv;

	if (argc >= 1)
	{
		printf("%d\n", argc - 1);
	}
	return (0);
}
