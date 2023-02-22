#include <stdio.h>

/**
 * main - Entry point
 * Description: prints the first 50 fibonacci numbers,
 * starting with 1 and 2
 *
 * Return: 0
 */

int main(void)
{
	int number_one = 1;
	int number_two = 2;
	long int fibonacci_number = number_one + number_two;
	int counter;

	for (counter = 3; counter <= 50; counter++)
	{
		if (counter == 50)
		{
			printf("%lu\n", fibonacci_number);
		}
		else
		{
			printf("%lu, ", fibonacci_number);
		}

		number_one = number_two;
		number_two = fibonacci_number;
	}

	return (0);
}
