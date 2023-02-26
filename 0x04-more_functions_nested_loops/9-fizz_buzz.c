#include <stdio.h>

/**
 * main - Entry point
 * Description: prints the numbers from 1 to 100, followed by a new line
 * But for multiples of 3 print Fizz instead of the number
 * For multiples of 5 print Buzz instead of th enumber
 * For numbers which are multiples of both 3 and 5 print FizzBuzz
 *
 * Return: void
 */
int main(void)
{
	int number;

	for (number = 1; number <= 100; number++)
	{
		if (number % 3 == 0 && number % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else if (number % 3 == 0)
		{
			printf("Fizz");
		}
		else if (number % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", number);
		}

		if (number < 100)
		{
			printf(" ");
		}
	}
	putchar('\n');

	return (0);
}
