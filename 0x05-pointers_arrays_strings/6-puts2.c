#include "main.h"

/**
 * puts2 - A C function that alternate printing
 * by index starting with the first inex
 *
 * @str: input
 */
void puts2(char *str)
{
	int i = 0;

	while(str[i] != '\0')
	{
		if ((i % 2) == 0)
			_putchar(str[i]);
		else
			continue;
		i++;
	}
	_putchar('\n');
}
