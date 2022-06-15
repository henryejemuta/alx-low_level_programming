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
	int cnt = 0;
	char *r = s;

	while (s[cnt] != '\0')
		cnt++;

	for (i = ( cnt - 1); i >= 0; i--)
	{
		s[j++] = r[i];
	}
}
