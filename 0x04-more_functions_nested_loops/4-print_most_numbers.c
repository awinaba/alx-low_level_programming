#include "main.h"

/**
 * print_most_numbers - print the  numbers, from 0 t0 9
 * except 2 and 4, followed by a new line
 *
 * Return: void
 */

void print_most_numbers(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		if (n == 2 || n == 4)
			return;

		_putchar('0' + n);
	}
	_putchar('\n');
}
