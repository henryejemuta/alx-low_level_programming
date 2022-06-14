#include "main.h"

/**
 * _strlen - A C program that return
 * the length of strings
 * @s: an iterable string
 * Return: int, the length of @s
 */
int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}
