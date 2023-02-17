#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * Description: Prints all the numbers of base 16 in lowercase,
 * followed by a new line
 *
 * Return: 0
 */

int main(void)
{
	int hexa;

	for (hexa = '0'; hexa <= '9'; hexa++)
	{
		putchar(hexa);
	}
	for (hexa = 97; hexa <= 102; hexa++)
	{
		putchar(hexa);
	}
	putchar('\n');

	return (0);
}
