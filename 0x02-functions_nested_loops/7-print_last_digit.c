#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - a function that prints the last digit of a number.
 *
 * Prototype: int print_last_digit(int)
 *
 * @d: The integer to print it's last digit
 *
 * Return: the value of the last digit
 */
int print_last_digit(int d)
{
	int last_digit;

	if (d < 0)
		last_digit = 0 - (d % 10);
	else
		last_digit = d % 10;
	_putchar(last_digit + '0');
	return (last_digit);
}
