#include "main.h"

/**
 * array_range - A C function that creates an array of integers.
 *
 * The array created should contain all the values
 * from min (included) to max (included), ordered from min to max
 *
 *
 * If min > max, return NULL
 *
 * If malloc fails, return NULL
 *
 * @min: starting int
 * @max: max int
 *
 * Return: the pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int len, i;
	int *ptr;

	if (min > max)
		return (NULL);
	len = max - min + 1;
	ptr = malloc(sizeof(int) * len);
	if (!ptr)
		return (NULL);
	for (i = 0; i < len; i++)
		ptr[i] = min++;
	return (ptr);
}
