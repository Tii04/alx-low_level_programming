#include <stdio.h>
#include "function_pointers.h"

/**
 * print - prints name.
 * @name: name to print.
 * Return: Void.
 */

void print(char *name)
{
	  printf("Hey %s\n", name);
}

/**
 * print_name - uses print() to print name.
 * @name: name to be printed.
 * @f: function pointer.
 */

void print_name(char *name, void (*f)(char *))
{
	f = &print;
	    f(name);
}

/**
 * main - executes.
 * Return: void.
 */

int main(void)
{
	  print_name("Tiisetso", print);
}
