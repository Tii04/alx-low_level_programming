#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - function to print name.
 * @name: name to be printed.
 * @f: function pointer.
 * Return: void.
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
	{
		f(name);
	}
}
