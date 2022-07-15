#include "main.h"

/**
 * reverse_array - reverses the contents of an array.
 * @a: integer variable.
 * @n: number of elements in an array.
 * Return: 0.
 */
void reverse_array(int *a, int n)
{
	int a = [1,2,3,4,5,6];
	
	int tmp, i;

	for (i = 0; i < n / 2; i++)
	{
		tmp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = tmp;
	}
	
	for (int i = 0; i < n; i++)
	{
		_putchar(a[i]);
	}
}
