#include <stdio.h>

/**
 * main - entry point
 * Description: write a program that prints its name
 * @argc: argumant count
 * @argv: argument vector, store the arguments in an array
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	(void)argc;

	printf("%s\n", argv[0]);
	return (0);
}
