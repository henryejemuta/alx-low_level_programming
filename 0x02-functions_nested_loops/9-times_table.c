#include <stdio.h>
#include "main.h"


/**
 * times_table - a function that prints
 * the 9 times table, starting with 0.
 *
 * Prototype: void times_table(void)
 */
void times_table(void)
{
	int i, j;

	i = 0;
	while (i <= 9)
	{
		j = 0;
		while (j <= 9)
		{
			if ((j * i) > 9)
			{
				if (j != 0)
				{
					_putchar(' ');
				}
				_putchar((j * i) / 10 + '0');
				_putchar((j * i) % 10 + '0');
				if (j < 9)
					_putchar(',');
			}
			else
			{
				if (j != 0)
				{
					_putchar(' ');
					_putchar(' ');
				}
				_putchar((j * i) + '0');
				if (j < 9)
					_putchar(',');
			}
			j++;
		}
		_putchar('\n');
		i++;
	}
}
