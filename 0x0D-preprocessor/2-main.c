#include <stdlib.h>
#include "_putchar.c"
/**
 * main - prints where file
 * was compiled from.
 * Return: 0 on success, non-zero otherwise.
 */

int main(void)
{
	_putchar(*__FILE__);

	return (0);
}
