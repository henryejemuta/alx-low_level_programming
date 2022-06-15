#include <stdio.h>
#include "main.h"

/**
 * print_array - a C function that prints n elements of
 * an array of integers, followed by a new line.
 *
 * Prototype: void print_array(int *a, int n);
 * where n is the number of elements of the array to be printed
 * Numbers must be separated by comma, followed by a space
 * The numbers should be displayed in
 * the same order as they are stored in the array
 * @a: an array of integers
 * @n: length of the array to print content
 */
void print_array(int *a, int n)
{
	int i = 0;

	for (; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < (n - 1))
			printf(", ");
	}
	printf("\n");
}
