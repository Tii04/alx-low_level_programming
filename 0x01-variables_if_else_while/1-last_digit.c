#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - will assign a random number to the
 * variable n each time it is executed.
 * Return: 0 if exited properly, otherwise non-zero.
 */

int main(void)

{
	int n, x;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	x = n % 10;

	printf("Last digit of %d is %d", n, x);

	if (n > 5)
		printf(" and is greater than 5");
	if (n == 0)
		printf(" and is 0");
	if (n < 0 && n != 0)
		printf(" and is less than 6 not 0");
	printf("\n");
	return (0);
}
