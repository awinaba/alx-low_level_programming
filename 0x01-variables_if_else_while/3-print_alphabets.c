#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * Description: Print the alphabet in lowercase, and then in uppercase
 * followed by a new line
 *
 * Return: 0
 */

int main(void)
{
	int alphabets;

	for (alphabets = 'a'; alphabets <= 'z'; alphabets++)
	{
		putchar(alphabets);
	}

	for (alphabets = 'A'; alphabets <= 'Z'; alphabets++)
	{
		putchar(alphabets);
	}

	putchar('\n');

	return (0);
}
