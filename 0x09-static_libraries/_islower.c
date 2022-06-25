#include <stdio.h>
#include "main.h"

/**
 * _islower - a function that checks for lowercase character.
 * @c: The character to check
 * Prototype: int _islower(int c);
 *
 * Return: 1 or 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}

	return (0);
}
