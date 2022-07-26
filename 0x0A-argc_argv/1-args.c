#include <stdio.h>

/**
 * main - prints number of
 * arguments.
 * @argc: counter.
 * @argv: vector.
 * Return: int.
 */

int main(int argc, char *argv[])
{
	printf("%d\n", argc - 1);
	(void)argv;
	return (0);
}
