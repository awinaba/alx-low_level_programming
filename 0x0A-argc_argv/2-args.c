#include <stdio.h>

/**
 * main - entry point
 * Description: prints all arguments a program receives
 * @argc: argument counter
 * @argv: argument vector
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int counter;

	for (counter = 0 ; counter < argc; counter++)
	{
		printf("%s\n", argv[counter]);
	}

	return (0);
}
