#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * Description: Prints the alphabet in lowercase followed by a new line
 * except letters q and e
 *
 * Return: 0
 */

int main(void)
{
	int alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		if (alphabet == 'q' || alphabet == 'e')
		{
			continue;
		}
		else
		{
			putchar(alphabet);
		}
	}
	putchar('\n');

	return (0);
}
