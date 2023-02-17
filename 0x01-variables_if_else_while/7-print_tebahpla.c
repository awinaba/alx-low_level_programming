#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * Description: Prints the lowercase alphabet in reverse,
 * followed by a new line
 *
 * Return: 0
 */

int main(void)
{
	int alphabet;

	for (alphabet = 'z'; alphabet >= 'a'; alphabet--)
	{
		putchar(alphabet);
	}
	putchar('\n');

	return (0);
}
