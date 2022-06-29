#include "main.h"
#include <stdlib.h>

/**
 * str_concat - A C function that concatenates two strings.
 *
 *
 * The returned pointer should point to a newly allocated
 * space in memory which contains the contents of s1,
 * followed by the contents of s2, and null terminated
 * if NULL is passed, treat it as an empty string
 * The function should return NULL on failure
 *
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to newly allocated space in memory,
 * 	   or NULL if error
 */
char *str_concat(char *s1, char *s2)
{
	char *a;
	unsigned int i, j, k, cnt;

	if (s1 == NULL)
		i = 0;
	else
	{
		for (i = 0; s1[i]; i++)
			;
	}
	if (s2 == NULL)
                j = 0;
	else
	{
		for (j = 0; s2[j]; j++)
			;
	}
	k = i + j + 1;

	a = malloc(k * sizeof(char));
	if (a == NULL)
		return (NULL);

	for (cnt = 0; cnt < i; cnt++)
		a[cnt] = s1[cnt];

	for (cnt = 0; cnt < j; cnt++)
		a[cnt + i] = s2[cnt];
	a[i + j] = '\0';
	return (a);
}
