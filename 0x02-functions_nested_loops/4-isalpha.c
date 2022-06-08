#include <stdio.h>
#include "main.h"

/**
 * _isalpha - a function that checks for alphabetic character.
 *
 * Prototype: int _isalpha(int c);
 * @c: The character to check
 *
 * Return: 1 or 0
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}

	return (0);
}
