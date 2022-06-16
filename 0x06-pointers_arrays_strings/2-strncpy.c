#include "main.h"

/**
 * char *_strcpy - A C function that copies
 * the string pointed from src to dest
 *
 * @dest: destination
 * @src: start
 *
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (*(src + i))
	{
		*(dest + i) = *(src + i);
		i++;
	}
	*(dest + i) = '\0';

	return (s1[i] - s[i]);
}
