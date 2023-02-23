#include <stdio.h>

/**
 * main - prints the first 98 Fibonacci numbers, starting with
 * 1 and 2, followed by a new line
 *
 * Return: 0
 */

int main(void)
{
	long int number_one = 1;
	long int number_two = 2;
	long int fibonacci = number_one + number_two;
	int counter = 1;

	printf("%lu, ", number_one);
	printf("%lu, ", number_two);

	while (counter <= 98)
	{
		if (counter == 98)
		{
			printf("%lu\n", fibonacci);
		}
		else
		{
			printf("%lu, ", fibonacci);
		}

		number_one = number_two;
		number_two = fibonacci;
		fibonacci = number_one + number_two;
		counter++;
	}

	return (0);
}
