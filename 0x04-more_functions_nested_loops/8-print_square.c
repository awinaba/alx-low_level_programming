#include "main.h"

/**
 * print_square - prints a square followed by a new line
 * @size: size of the square
 *
 * Return: void
 */

void print_square(int size)
{
	int t;
	int i;

	if (size <= 0)
	{
		_putchar('\n');
	}

	for (t = 1; t <= size; t++)
	{
		for (i = 1; i <= size; i++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
