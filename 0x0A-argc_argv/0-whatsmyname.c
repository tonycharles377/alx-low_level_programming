#include<stdio.h>
/**
 * main - prints name of program followed by new line
 * @argc: number of arguments
 * @argv: array of argc
 * Return: 0
 */
int main(int argc, char **argv)
{
	if (argc >= 1)
	{
		printf("%s\n", *argv);
	}

	return (0);
}
