#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - a function that prints
 * 10 times the alphabet, in lowercase, followed by a new line.
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
int idx = 0;

while (idx < 10)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
	idx++;
}
}
