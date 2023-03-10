#include <stdio.h>

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

	if (argc < 2)
	{
		printf("%s\n", "Error");
		return (1);
	}

	for (counter = 1; counter < argc; counter++)
	{
		product *= atoi(argv[counter]);
	}

	printf("%d\n", product);

	return (0);
}
