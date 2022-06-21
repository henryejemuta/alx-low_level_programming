#include "main.h"

/**
 * char *_memset - A C a function that fills
 * memory with a constant byte
 *
 * The _memset() function fills the first n
 * bytes of the memory area pointed to by s
 * with the constant byte b
 *
 * @s: pointer to string.
 * @b: the constant byte b to fill fist n with
 * @n: bytes of the memory area pointed to by s
 *
 * Return: a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	while ((i < n) && (s[i] != '\0'))
	{
		s[i++] = b;
	}
	return (s);
}
