#include "main.h"

/**
 * string_nconcat - concatenates two strings.
 * @s1: first string.
 * @s2: Second string.
 * @n: number of bytes.
 * Return: string.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len = n, i;

	char *concate;

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}

	for (i = 0; s1[i]; i++)
	{
		len++;
	}

	concate = (cha *)malloc(sizeof(char) * len);

	if (concate == NULL)
	{
		return (NULL);
	}

	len = 0;

	for (i = 0; s1[i]; i++)
	{
		concate[len++] = s1[i];
	}
	for (i = 0; s2[i] && i < n; i++)
	{
		concate[len++] = s2[i];
	}
	concate = '\0';
	return (concate);
}
