#include "main.h"

/**
 * _strlen_recursion - A C function that
 * returns the length of a string.
 *
 * @s: string toget length
 * Return: int leangth of string s
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);

	s++;
	return (1 + _strlen_recursion(s));
}
