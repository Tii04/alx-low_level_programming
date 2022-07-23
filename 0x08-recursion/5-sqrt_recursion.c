#include "main.h"

/**
 * _sqrt_recursion - returns
 * natural square root of number.
 * @n: number
 * Return: n if n has natural number,
 * otherwise -1.
 */

int _sqrt_recursion(int n)
{
	if ((n * n) / n != n)
	{
		return (-1);
	}
	else
		return (_sqrt_recursion((n * n) / n));
}
