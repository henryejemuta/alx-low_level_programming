#include <stdio.h>
#include "dog.h"

/**
 * print_dog - A C function that prints a struct dog
 *
 * Format: see example bellow
 * You are allowed to use the standard library
 * If an element of d is NULL, print (nil) instead of
 * this element. (if name is NULL, print Name: (nil)
 * If d is NULL print nothing.
 *
 * @d: pointer to dog struct
 * Return: void
 **/
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name != NULL)
			printf("Name: %s\n", d->name);
		else
			printf("Name: (nil)\n");
		printf("Age: %.6f\n", d->age);
		if (d->owner != NULL)
			printf("Owner: %s\n", d->owner);
		else
			printf("Owner: (nil)\n");

	}
}
