#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * Description: prints all possible combinations of single-digitnumbers
 *
 * Return: 0
 */

int main(void)
{
	int number;

	for (number = 0; number <= 9; number++)
	{
		putchar((number % 10) + '0');
		if (number == 9)
			continue;

		putchar(',');
		putchar(' ');
	}
	putchar('\n');

	return (0);
}
