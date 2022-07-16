#include "main.h"

/**
 * cap_string - capitalises all words of a string.
 * @a: character integer.
 * Return: char.
 */

char *cap_string(char *a)
{
	char spa[] = {32, '\n', 9, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	int len = 13;

	int s = 0, i;

	char a[];

	while (a[s])
	{
		i = 0;

		while (i < len)
		{
			if (s == 0 || a[s - 1] == spa[i] && (a[s] >= 97 && a[s] <= 122))
			{
				[s] = a[s] - 32;
			}
			i++;
		}
		s++;
	}
	return (a);
}

