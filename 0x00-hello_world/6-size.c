/**
 * main - prints the size of various types on the computer it
 * compiled and run on.
 *
 * Return: 0
 */

#include <stdio.h>

int main(void)
{
	printf("Size of a char: %d\n byte(s)", sizeof(char));
	printf("Size of an int: %d\n byte(s)", sizeof(int));
	printf("Size of a long int: %d\n byte(s)", sizeof(long int));
	printf("Size of a long long int: %d\n byte(s)", sizeof(long long int));
	printf("Size of a float: %d\n byte(s)", sizeof(float));

	return (0);
}
