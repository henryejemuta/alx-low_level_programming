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
	char r = s[0];
	int cnt = 0;

	while (s[cnt] != '\0')
		cnt++;

	for (i = 0; i < cnt; i++)
	{
		cnt--;
		r = s[i];
		s[i] = s[cnt];
		s[cnt] = r;
	}
}
