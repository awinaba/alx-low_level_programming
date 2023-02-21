#include "main.h"

/**
 * times_tables - prints the 9 times table, starting with 0
 *
 * Return : 0
 */

void times_table(void)
{
	int i = 0;
	int j = 0;

	while (i < 10)
	{
		while (j < 10)
		{
			int product = i * j;

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
			j++;
		}
		i++;
		_putchar('\n');
	}
}
