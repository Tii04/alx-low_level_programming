#include <stdlib.h>

#include <time.h>

#include <stdio.h>

/**
* main - determines if a number is positive/negative or zero.
* Return: 0 if exited properly, otherwise non-zero
*/

int main(void)
{

	int n;


	srand(time(0));

	n = rand() - RAND_MAX / 2;

	if (n > 1)
		printf("%d is positive\n", n);
	if (n == 0)
		printf("%d is zero\n", n);
	if (n < 0)
		printf("%d is negative\n", n);
	printf ("\n");
	return (0);

}
