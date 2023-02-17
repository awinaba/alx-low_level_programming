#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * Description: Print all single digit numbers of base 10 starting from 0
 * followed by a new line. Only putchar function is allowed
 *
 * Return: 0
 */

int main(void)
{
	int number;

	for (number = '0'; number <= '9'; number++)
	{
		putchar(number);
	}
	putchar('\n');

	return (0);
}
