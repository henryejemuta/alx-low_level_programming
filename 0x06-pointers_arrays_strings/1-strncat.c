#include "main.h"

/**
 * char *_strncat - A C function that
 * concatenates two strings.
 * @dest: destination string
 * @src: source string
 * @n: number of bytes to read from src
 *
 * Return: the pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (j != n)
	{
		dest[i++] = src[j++];
	}

	return (dest);
}
