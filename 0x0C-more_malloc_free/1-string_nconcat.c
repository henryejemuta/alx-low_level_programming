#include "main.h"

/**
 * string_nconcat - A C function that concatenates two strings
 *
 * The returned pointer shall point to a newly allocated
 * space in memory, which contains s1, followed by the
 * first n bytes of s2, and null terminated
 *
 * If the function fails, it should return NULL
 * If n is greater or equal to the length of s2
 * then use the entire string s2
 *
 * if NULL is passed, treat it as an empty string
 *
 *
 * @s1: first string
 * @s2: second string
 * @n: number of bytes of s2 to concat with s1
 *
 * Return: pointer to concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
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
		{
			if (j == n)
				break;
		}
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
