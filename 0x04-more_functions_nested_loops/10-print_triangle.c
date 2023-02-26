#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: size of the triangle
 *
 * Return: void
 */

void print_triangle(int size)
{
	int height;
	int width;
	int symbol;

	for (height = 1; height <= size; height++)
	{
		if (size <= 0)
		{
			_putchar('\n');
		}

		for (width = 1; width <= (size - height); width++)
		{
			_putchar(' ');
		}

		for (symbol = 1 ; symbol <= height; symbol++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
