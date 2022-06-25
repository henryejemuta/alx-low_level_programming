#include "main.h"

/**
 * _abs - a function that computes the absolute value of an integer.
 *
 * Prototype: int _abs(int);
 * FYI: The standard library provides a similar
 * function: abs. Run man abs to learn more.
 * @a: The argument to compute
 *
 * Return: an integer
 */
int _abs(int a)
{
	if (a < 0)
	{
		return (0 - a);
	}
	return (a);
}
