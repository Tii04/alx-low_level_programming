#include <stdio.h>
/**
 * main - prints  the various size of types
 * Return: 0 if exited properly, non-zero otherwise
 */
int main(void)
{
	printf("Size of an int: ", sizeof(int));
	printf("Size of a char: ", sizeof(char));
	printf("Size of a long int: ", sizeof(long int));
	printf("Size of a long long int: ", sizeof(long long int));
	printf("Size of a float: ", sizeof(float));
	return (0);
}
