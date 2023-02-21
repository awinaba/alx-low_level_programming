#include "main.h"

/**
 * _isalpha - checks for an alphabetic character
 * @c :  character to be checked
 *
 * Return: 1 if c is a letter, lowercase or uppercase, otherwise 0
 */

int _isalpha(int c)
{
	if ((c >= 'a' || c >= 'A') && (c <= 'z' || c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
