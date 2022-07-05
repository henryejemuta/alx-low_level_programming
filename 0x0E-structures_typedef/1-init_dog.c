#include "dog.h"

/**
 * init_dog - A C function that  initialize
 * a variable of type struct dog
 * @d: pointer to the dog struct
 * @name: pointer to dog name
 * @age: dog age
 * @owner: pointer to dog owner name
 * Return: void
 **/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
