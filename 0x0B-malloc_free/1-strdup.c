#include "main.h"
#include <stdlib.h>

/**
 * _strdup - A C function that returns a pointer
 * to a newly allocated space in memory, which contains
 * a copy of the string given as a parameter.
 *
 *
 * The _strdup() function returns a pointer to a new string
 * which is a duplicate of the string str. Memory for the
 * new string is obtained with malloc, and can be freed
 * with free.
 * On success, the _strdup function returns a pointer to
 * the duplicated string. It returns NULL if insufficient
 * memory was available
 *
 * @str: string to duplicate
 *
 * Return: NULL if str = NULL
 */
char *_strdup(char *str)
{
	char *a;
	unsigned int i, j;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i]; i++)
		;
	i++;

	a = malloc(i * sizeof(char));
	if (a == NULL)
		return (NULL);
	for (j = 0; j < i; j++)
		a[j] = str[j];

	return (a);
}
