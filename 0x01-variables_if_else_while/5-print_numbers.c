#include <stdio.h>

/**
 * main - prints numbers 0-9.
 * Return: 0, or other number if failed.
 */

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
		printf("%d", i);
	putchar('\n');
	return (0);
}
