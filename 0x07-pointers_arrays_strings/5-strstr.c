#include "main.h"
#define NULL 0

/**
 * _strstr - A C a function that
 * locates a substring.
 *
 * The _strstr() function finds the first
 * occurrence of the substring needle in
 * the string haystack. The terminating
 * null bytes (\0) are not compared
 *
 * Returns a pointer to the beginning of
 * the located substring, or NULL if
 * the substring is not found.
 *
 * @haystack: string to search
 * @needle: target substring to search for
 *
 * Return: a pointer to the first occurrence or NULL
 */
char *_strstr(char *haystack, char *needle)
{
int i = 0, j, k;

if (needle[i] == '\0')
	return (haystack);

while (haystack[i] != '\0')
{
	if (haystack[i] == needle[0])
	{
		k = i, j = 0;
		while (needle[j] != '\0')
		{
			if (haystack[k] == needle[j])
				k++, j++;
			else
				break;
		}
	if (needle[j] == '\0')
	{
		return (haystack + i);
	}
}
i++;
}
return (NULL);
}
