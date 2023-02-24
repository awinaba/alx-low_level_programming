#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: size of the triangle
 *
 * Return: void
 */

void print_triangle(int size)
{
	int t;
	int indent;

	for (t = 1; t <= size; t++)
	{
		if (size <= 0)
		{
			_putchar('\n');
		}

		for (indent = t; indent < size; indent++)
		{
			_putchar(' ');
		}

		for (indent = 1 ; indent <= t; indent++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
