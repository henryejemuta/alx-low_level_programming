#include "main.h"

/**
 * char *_memcpy - A C a function that copies memory area
 *
 * The _memcpy() function copies n bytes from memory
 * area src to memory area dest
 *
 * @dest: pointer to hold copy content from src
 * @src: source to copy n bytes from memory area from
 * @n: bytes of the memory to copy from src
 *
 * Return: a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
