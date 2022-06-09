#include "main.h"

/**
 * jack_bauer - a function that prints every minute
 * of the day of Jack Bauer, starting
 * from 00:00 to 23:59.
 *
 * Prototype: void jack_bauer(void)
 */
void jack_bauer(void)
{
	int i, j, min_pref, sec_pref;

	for (i = 0; i < 24; i++)
	{
		min_pref = (i / 10);
		if (i < 10)
			min_pref = 0;
		for (j = 0; j < 60; j++)
		{
			_putchar(min_pref + '0');
			_putchar((i % 10) + '0');
			_putchar(':');
			sec_pref = (j / 10);
			if (j < 10)
				sec_pref = 0;
			_putchar(sec_pref + '0');
			_putchar((j % 10) + '0');
			_putchar('\n');
		}
	}
}
