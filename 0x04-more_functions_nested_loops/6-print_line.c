#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 * @n: number of times the character _ should be printed
 *
 * Return: void
 */

void print_line(int n)
{
	int t;

	for (t = 1; t <= n; t++)
	{
		if (n <= 0)
		{
			_putchar('\n');
		}
		else
		{
			_putchar('_');
		}
	}
}
