#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: number of times the character \ should be printed
 *
 * Return: void
 */

void print_diagonal(int n)
{
	int symbol;
	int indent;

	if (n <= 0)
	{
		_putchar('\n');
	}

	for (symbol = 1; symbol <= n; symbol++)
	{
		for (indent = 1; indent < symbol; indent++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putcahr('\n');
	}
}
