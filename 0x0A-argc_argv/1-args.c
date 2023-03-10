#include <stdio.h>

/**
 * main - entry point
 * Description: prints the number of arguments passed into it
 * @argc: argument counter
 * @argv: argument vector
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	(void)argv;

	printf("%d\n", (argc - 1));
	return (0);
}
