#include "main.h"
#include <stdlib.h>

/**
 * print_rev - A C function that creates an array of
 * chars, and initializes it with a specific char.
 *
 * @size: size of array to create
 * @c: Character to initialize array to
 * Return: a pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *a;
	unsigned int i;

	if (size == 0)
		return (NULL);
	a = malloc(size * sizeof(char));
	if (a == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		a[i] = c;

	return (a);
}
