#include "main.h"

/**
 * leet - encodes a string into 1337
 * @s: string to be encoded
 * Return: resulting string
 */

char *leet(char *s)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j <= s[i]; j++)
		{
			if (s[i] == 'a' || s[i] == 'A')
			{
				s[i] = '4';
			}
			else if (s[i] == 'e' || s[i] == 'E')
			{
				s[i] = '3';
			}
			else if (s[i] == 'o' || s[i] == 'O')
			{
				s[i] = '0';
			}
			else if (s[i] == 't' || s[i] == 'T')
			{
				s[i] = '7';
			}
			if (s[i] == 'l' || s[i] == 'L')
			{
				s[i] = '1';
			}
			s++;
		}
	}

	return (s);
}
