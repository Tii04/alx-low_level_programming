#include "main.h"

/**
 * factorial - prints factorial
 * of given number.
 * @n: int param.
 * Return: int n.
 */

int factorial(int n)
{
	if (n <= 0)
	{
		return (-1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
