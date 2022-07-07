#include "main.h"

/**
 * _isalpha - checks for alphabetic character.
 * Return: 1 if c is a letter, lowercase or uppercase
 * otherwise zero.
 * @c: c is the character agrument
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'z'));
}
