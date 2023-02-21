#include "main.h"

/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n : number
 *
 * Return : n t0 98
 */

void print_to_98(int n)
{
	while (n > 98)
	{
		if (n >= 100)
		{
			_putchar((n / 100) + '0');
			_putchar((n % 100) / 10 + '0');
			_putchar((n % 10) + '0');
		}
		else
		{
			_putchar((n / 10) + '0');
			_putchar((n % 10) + '0');
		}
		_putchar(',');
		_putchar(' ');
		n--;
	}
	
	while (n < 98)
	{
		_putchar((n / 10) + '0');
		_putchar((n % 10) + '0');
		_putchar(',');
		_putchar(' ');
		n++;
	}

	if (n == 98)
	{
		_putchar((n / 10) + '0');
		_putchar((n % 10) + '0');
	}
	_putchar('\n');
}
