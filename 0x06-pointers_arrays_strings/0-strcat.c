#include "main.h"

/**
 * char *_strcat - A C function that
 * concatenates two strings.
 *
 * This function appends the src string to
 * the dest string, overwriting the terminating
 * null byte (\0) at the end of dest, and
 * then adds a terminating null byte
 *
 * @dest: destination
 * @src: start
 *
 * Return: the pointer to dest
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (src[j] != '\0')
	{
		dest[i++] = src[j++];
	}
	dest[i] = '\0';
	return (dest);
}
