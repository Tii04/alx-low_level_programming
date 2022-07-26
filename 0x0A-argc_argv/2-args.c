#include <stdio.h>

/**
 * main - prints arguments.
 * @argc: counter.
 * @argv: vector.
 * Return: string.
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
