#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *main - gives a random number
 *
 * use if statements
 *
 *Return: 0
 */
int main(void)
{
	int n;
	int Ldigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (Ldigit > 5)
		printf("last digit of %d is %d and is greater than 5\n", n, Ldigit);
	else if (Ldigit == 0)
		printf("last digit of %d is %d and is 0\n", n, Ldigit);
	else if (Ldigit < 6 && Ldigit != 0)
		printf("last digit of %d is %d and is less than 6 and not 0\n", n, Ldigit);
	return (0);
}
