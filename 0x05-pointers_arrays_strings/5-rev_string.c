#include "main.h"

/**
 * rev_string - A C function that prints a string,
 * in reverse.
 *
 * @s: string to reverse
 */
void rev_string(char *s)
{
	int i;
	int j = 0;
	int cnt = _strlen(s);
	char r[cnt] = s;

	for (i = ( _strlen(r) - 1); i >= 0; i--)
	{
		s[j++] = r[i];
	}
}
