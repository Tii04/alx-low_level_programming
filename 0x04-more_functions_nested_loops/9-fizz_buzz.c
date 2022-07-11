#include <stdio.h>

/**
 * fizz_buzz - prints numbers 1 - 100.
 * Return: void.
 */
int fizz_buzz(void)
{
	int i;

	while (i <= 100)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz ");
		}
		else
			printf("%d ", i);
		i++;
	}
		printf("\n");
		return (0);
}
