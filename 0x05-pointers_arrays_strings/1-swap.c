#include "main.h"

/**
 * swap_int - A C program that swaps
 * a value of two integers
 * @a: int 1
 * @b: int 2
 */
void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
