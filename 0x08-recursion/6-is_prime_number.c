#include "main.h"

/**
 * is_prime_number- returns 1
 * if number is prime, otherwise 0.
 * @n: int param.
 * Return: 1 if n prime, otherwise 0.
 */

int is_prime_number(int n)
{
	if (n % 2 == 0)
	{
		return (0);
	}
	else if (n % 3 == 0)
	{
		return (0);
	}
	else if (n % 5 == 0)
	{
		return (0);
	}
	else
	{
		return (is_prime_number(n / n));
	}
}
