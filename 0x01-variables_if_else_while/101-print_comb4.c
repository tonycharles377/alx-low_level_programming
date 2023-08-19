#include <stdio.h>
/**
 * main - prints all possible different combinations of three digits
 * Numbers must be separated by ,, followed by a space
 * Print only the smallest combination of three digits
 * only use the putchar function
 * six times maximum in your code
 * Return: 0 (succsess)
 */

int main(void)
{
	int i = 48;
	int j = 49;
	int k = 50;

	while (i < 56 && j < 57 && k < 58)
	{
		putchar(i);
		putchar(j);
		putchar(k);

		if (i == 55 && j == 56 && k == 57)
		{
			putchar('\n');
			i++;
			j++;
			k++;
		}
		else
		{
			putchar(',');
			putchar(' ');

			if (k < 57)
				k++;
			else if (j < 56)
			{
				k = j + 2;
				j++;
			}
			else
			{
				i++;
				j = i + 1;
				k = j + 1;
			}
		}
	}
	return (0);
}

