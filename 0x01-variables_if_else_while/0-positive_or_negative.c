#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
*main – assigns a random number to the variable n each time it is executed
*Return: 0 if exited properly, otherwise non-zero
*/
int main(void)

{

		int n;



			srand(time(0));

				n = rand() - RAND_MAX / 2;

				if (n > 0)
				{
					printf("%d is postive\n", n);
				}
				else if (n == 0)
				{
					printf("%d is zero\n", n);
				}
				else
				{
					printf("%d is negative\n", n);
				}
					return (0);

}
