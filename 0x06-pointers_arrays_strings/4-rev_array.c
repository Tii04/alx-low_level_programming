#include "main.h"

/**
 * reverse_array - reverses the contents of an array.
 * @a: integer variable.
 * @n: number of elements in an array.
 * Return: 0.
 */
void reverse_array(int *a, int n)
{
	int *p, i, aux, k;
	
	p = a;

	for (i = 0; i < n; i++)
		p++

	for (i = 0; i < n / 2; i++)
	{
		aux = a[k];
		a[k] = *p;
		*p = aux;
		p--;
	}
}
