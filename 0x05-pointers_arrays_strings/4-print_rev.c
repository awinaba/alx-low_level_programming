#include "main.h"

/**
 * print_rev - prints a string in reverse, followed by a new line
 * @s: character to be printed in reverse
 * Return: void
 */

void print_rev(char *s)
{
	int n;
	int len;
	/*find the length of the string*/
	for (len = 0; *s != '\0'; s++)
	{
		len++;
	}
	/*omit the null character*/
	s--;

	for (n = len; n > 0; n--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
