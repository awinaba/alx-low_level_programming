#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: number of times the character \ should be printed
 *
 * Return: void
 */

void print_diagonal(int n)
{
	int t;
	int indent;

	for (t = 1; t <= n; t++)
	{
		if (n <= 0)
		{
			_putchar('\n');
		}
		else
		{
			for (indent = 0; indent < t; indent++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
