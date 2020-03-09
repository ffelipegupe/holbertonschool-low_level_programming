#include <stdio.h>
#include "dog.h"

/**
 * init_dog - function that initializes a variable of type struct dog
 * @d: to initialize
 * @name: name of the dog to initialize
 * @age: age of the dog to initialize
 * @owner: owner of the dog to initialize
 *
 * Return: always 0
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
