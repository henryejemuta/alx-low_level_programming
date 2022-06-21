#include "main.h"
#define NULL 0

/**
 * unsigned int _strspn - A C a function that
 * searches a string for any of a set of bytes.
 *
 * The _strpbrk() function locates the first
 * occurrence in the string s of any of the
 * bytes in the string accept
 *
 * Returns a pointer to the byte in s that
 * matches one of the bytes in accept,
 * or NULL if no such byte is found
 *
 * @s: string to search for c
 * @accept: character to search for within s
 *
 * Return: a pointer to the first occurrence or NULL
 */
char *_strpbrk(char *s, char *accept)
{
	int i = 0, j;

	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j++])
			{
				s = &s[i];
				return (s);
			}
		}
		i++;
	}

	return (NULL);
}
