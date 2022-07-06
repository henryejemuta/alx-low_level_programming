#include "function_pointers.h"

/**
 * array_iterator - A C function that executes a
 * function given as a parameter on each element of an array.
 * @array: array to execute func on
 * @size: the size of the array
 * @action:  a pointer to the function you need to use
 *
 * Return: void
 **/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array && action)
		while  (size--)
			action(*(array++));
}
