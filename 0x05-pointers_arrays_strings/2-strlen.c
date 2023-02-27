#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: string for which length is to be determined
 * Return: string length
 */

int _strlen(char *s)
{
	int n;

	for (n = 0; *s != '\0'; s++)
	{
		n++;
	}

	return (n);
}
