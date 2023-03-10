#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


/**
 * _is_num - loops through argv to check for number
 * @aargv: argv element
 * Return: true if element is a number, otherwiser false
 */

bool _is_num(char *aargv)
{
	int i;

	for (i = 0; aargv[i]; i++)
	{
		if (!(aargv[i] >= '0' && aargv[i] <= '9'))
			return (0);
	}
	return (1);
}

/**
 * main - entry point
 * Description: adds positive numbers
 * @argc: argument counter
 * @argv: argument vector
 * Return: 1 if one of arguments is not a positive number or contains symbols
 */

int main(int argc, char *argv[])
{
	int counter;
	int sum = 0;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}

	for (counter = 1; counter < argc; counter++)
	{
		if (_is_num(argv[counter]))
		{
			sum += atoi(argv[counter]);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}

	printf("%d\n", sum);

	return (0);
}
