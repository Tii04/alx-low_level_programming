#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers.
 * @argc: counter.
 * @argv: vector.
 * Return: int.
 */

int main(int argc, char *argv[])
{
	int i, mul;

	for (i = 1; i < argc; i++)
	{
		mul = mul * atoi(argv[i]);
	}
		printf("\n");

	return (mul);
}
