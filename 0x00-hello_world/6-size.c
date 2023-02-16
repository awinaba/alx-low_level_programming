/**
 * main - prints the size of various types on the computer it
 * compiled and run on.
 *
 * Return: 0
 */

#include <stdio.h>

int main(void)
{
	printf("Size of a char: %d\n", sizeof(char));
	printf("Size of an int: %d\n", sizeof(int));
	printf("Size of a long int: %d\n", sizeof(long int));
	printf("Size of a long long int: %d\n", sizeof(long long int));
	printf("Size of a float: %d\n", sizeof(float));

	return (0);
}
