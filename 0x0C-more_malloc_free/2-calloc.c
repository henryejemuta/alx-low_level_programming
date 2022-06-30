#include "main.h"

/**
 * _calloc - A C function that allocates
 * memory for an array, using malloc.
 *
 * The _calloc function allocates memory
 * for an array of nmemb elements of size
 * bytes each and returns a pointer to
 * the allocated memory.
 *
 * The memory is set to zero
 * If nmemb or size is 0, then _calloc returns NULL
 *
 * If malloc fails, then _calloc returns NULL
 *
 *
 * @nmemb: number of columns
 * @size: number of rows
 *
 * Return: a pointer to a 2 dimensional array of integers. NULL on failure
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int **a;
	unsigned int i, j;

	if (nmemb <= 0 || size <= 0)
		return (NULL);
	a = (int **)malloc(sizeof(int *) * size);
	if (a == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		a[i] = (int *)malloc(sizeof(int) * nmemb);
		if (a[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(a[j]);
			free(a);
			return (NULL);
		}
		for (j = 0; j < nmemb; j++)
			a[i][j] = 0;
	}

	return (a);
}
