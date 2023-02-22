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
	long int number_one = 1;
	long int number_two = 2;
	long int fibonacci_number = number_one + number_two;
	int counter = 3;

	printf("%lu, ", number_one);
	printf("%lu, ", number_two);

	while (counter <= 50)
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
		fibonacci_number = number_one + number_two;
		counter++;
	}

	return (0);
}
