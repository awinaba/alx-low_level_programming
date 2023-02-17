#include <stdlib.h>
#include <stdio.h>

/**
 * main - Entry point
 * Description: Print the alphabet in lowercase, followed by a new line
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
	putchar('\n');

	return (0);
}
