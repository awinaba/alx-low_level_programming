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

	for (counter = 0; counter <= 10; counter++)
	{
		while (number <= 14)
		{
			if (number >= 10)
			{
				_putchar((number / 10) + '0');
				_putchar((number % 10) + '0');
			}
			number++;
		}
		_putchar('\n');
	}
}
