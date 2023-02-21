#include "main.h"

/**
 * times_tables - prints the 9 times table, starting with 0
 *
 * Return : 0
 */

void times_table(void)
{
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			product = i * j;

			if (j == 0)
			{
				_putchar('0' + product);
			}
			else if (product <=9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + product);
			}
			else if (product > 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar('0' + (product / 10));
				_putchar('0' + (product % 10));
			}
		}
		_putchar('\n');
	}
}
