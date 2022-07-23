#include "main.h"

/**
 * _pow_recursion - returns
 * value of x to the y.
 * @x: base.
 * @y: Exponent.
 * Return: x, otherwise -1.
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	if (y == 1)
	{
		return (x);
	}
	else
		return (x * _pow_recursion(x, y - 1));
}
