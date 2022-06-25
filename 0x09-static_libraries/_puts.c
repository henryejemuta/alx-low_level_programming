#include "main.h"

/**
 * _puts - A C function that prints
 * the input string
 * @str: string input
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
