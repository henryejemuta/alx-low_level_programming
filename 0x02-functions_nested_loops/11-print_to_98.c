#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - a function that prints
 * all natural numbers from n to 98, followed by a new line.
 *
 * Prototype: void print_to_98(int n);
 *
 * @n: were to start printing from
 */
void print_to_98(int n)
{
	int i;

	if (n < 98)
	{
		for (i = n; i <= 98; i++)
			printf("%d%s", i, (i == 98) ? "" : ", ");
	}
	else
	{
		for (i = n; i >= 98; i--)
			printf("%d%s", i, (i == 98) ? "" : ", ");
	}
	printf("\n");
}
