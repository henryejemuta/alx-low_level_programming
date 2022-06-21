#include "main.h"

/**
 * _strspn - A C a function that
 * that gets the length of a prefix substring.
 *
 * Returns the number of bytes in the initial
 * segment of s which consist only of bytes from accept
 *
 * @s: string to search for c
 * @accept: character to search for within s
 *
 * Return: a pointer to the first occurrence or NULL
 */
unsigned int _strspn(char *s, char *accept)
{
int i = 0, j, cnt = 0;

while (s[i] != '\0')
{
	j = 0;
	while (accept[j] != '\0')
	{
		if (s[i] == accept[j])
		{
			cnt++;
			break;
		}
		if (accept[j + 1] == '\0' && s[i] != accept[j])
			return (cnt);
		j++;
	}
	i++;
}
return (cnt);
}
