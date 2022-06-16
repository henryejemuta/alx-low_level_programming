#include "main.h"

/**
 * char *_strncpy - A C function that copies
 * the string pointed from src to dest
 *
 * @dest: destination
 * @src: start
 *
 * Return: the pointer to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while ((src[i] != '\0') && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	for (; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
