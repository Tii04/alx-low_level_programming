#include <stdio.h>

/**
 * main - Writes a program that prints the alphabet
 * in lowercase, followed by a new line.
 * Return: 0 if exited properly, non-zero number otherwise.
 */
int main(void)
{
	int ch;

	for (ch = 97; ch <= 122; ch++)
	{
		putchar(ch);
	}
		putchar(10);
	return (0);
}
