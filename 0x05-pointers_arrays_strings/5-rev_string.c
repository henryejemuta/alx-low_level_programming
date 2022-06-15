#include "main.h"

/**
 * rev_string - A C function that prints a string,
 * in reverse.
 *
 * @s: string to reverse
 */
void rev_string(char *s)
{
	int fcounter = 0;
	int i, n;

	for (i = 0; s[i] != '\0'; i++)
	{
		fcounter++;
	}

	for (n = (fcounter - 1); n >= 0; n--)
	{
		_putchar(s[n]);
	}
}
