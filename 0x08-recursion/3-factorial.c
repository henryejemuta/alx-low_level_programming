#include "main.h"

/**
 * factorial - A C function that
 * returns the factorial of a given number.
 *
 * @n: Number to get factorial
 * Return: int the factorial of given number
 */
int factorial(int n)
{
	if(n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (1);

	return (n * factorial(n - 1));
}
