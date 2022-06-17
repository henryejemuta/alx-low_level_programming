#include "main.h"

/**
 * reverse_array - A C function that reverses
 * the content of an array of integers.
 *
 * @a: array to reverse
 * @n: number of byte in array
 */
void reverse_array(int *a, int n)
{
	int temp, i;

	n = n - 1;
	for (i = 0; i <= n;)
	{
		temp = a[i];
		a[i++] = a[n];
		a[n--] = temp;
	}
}
