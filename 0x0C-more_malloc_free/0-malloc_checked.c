#include "main.h"

/**
 * *malloc_checked - A C function allocates memory using malloc.
 *
 * if malloc fails, the malloc_checked function should
 * cause normal process termination with a status value of 98
 *
 * @b: number of bytes to be malloced
 *
 * Return: returns a void pointer
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (!ptr)
		exit(98);
	return (ptr);
}
