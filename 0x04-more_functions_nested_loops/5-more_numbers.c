#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 * followed by a new line
 *
 * Return: void
 */

void more_numbers(void)
{
	int counter;
	int number;

	for (counter = 0; counter <= 9; counter++)
	{
		for (number = 0; number <= 14; number++)
		{
			if (number >= 10)
			{
				_putchar((number / 10) + '0');
			}
			_putchar((number % 10) + '0');
		}
		_putchar('\n');
	}
}
