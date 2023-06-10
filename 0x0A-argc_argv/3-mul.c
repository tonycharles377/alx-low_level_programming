#include<stdio.h>
#include<stdlib.h>
/**
 * main - multiplies two numbers
 * @argc: number of arguments
 * @argv: arry of argc
 * Return: product else return 1 and print Error
 */
int main(int argc, char **argv)
{
	int i;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		i = (atoi(argv[1])) * (atoi(argv[2]));
		printf("%d\n", i);
	}
	return (0);
}
