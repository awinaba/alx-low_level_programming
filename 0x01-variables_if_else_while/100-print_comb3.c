#include <stdio.h>

/**
 * main - Entry point
 * Description: prints all possible differnt conbinations of two digits
 *
 * Return: 0;
 */

int main(void)
{
	int digit_one;
	int digit_two;

	for (digit_one = 0; digit_one < 9; digit_one++)
	{
		for (digit_two = digit_one + 1; digit_two < 10; digit_two++)
		{
			putchar((digit_one % 10) + '0');
			putchar((digit_two % 10) + '0');
			if (digit_one == 8 && digit_two == 9)
				continue;

			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
