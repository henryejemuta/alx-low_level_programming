#include "main.h"
#define NULL 0

/**
 * char *_strchr - A C a function that
 * locates a character in a string.
 *
 * Returns a pointer to the first occurrence
 * of the character c in the string s,
 * or NULL if the character is not found
 *
 * @s: string to search for c
 * @c: character to search for within s
 *
 * Return: a pointer to the first occurrence or NULL
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while ((s[i] != c) && (s[i] != '\0'))
		i++;

	if (s[i] == c)
		return (&s[i]);

	return (NULL);
}
