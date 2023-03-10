#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * Description: multiplies two numbers
 * @argc: argument counter
 * @argv: argument vector
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int product = 1;
	int counter;

	if (argc > 2)
	{
		for (counter = 1; counter < argc; counter++)
		{
			product *= atoi(argv[counter]);
		}

		printf("%d\n", product);
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	return (0);
}
