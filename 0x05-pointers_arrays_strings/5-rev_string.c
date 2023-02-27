#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to be reversed
 * Return: void
 */

void rev_string(char *s)
{
	int n;
	int len;

	for (len = 0; *s != '\0'; s++)
	{
		len++;
	}
	s--;

	for (n = len; n > 0; n--)
	{
		s--;
	}
}
