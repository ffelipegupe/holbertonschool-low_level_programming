#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

/**
 * _strdup - fucntion that returns a pointer to a newly allocated space in
 * memory, which contains a copy of the string given as a parameter.
 * @str: string to copy
 * Return: a pointer on success, NULL if str = NULL
 */

char *_strdup(char *str)
{
	char *a = NULL;
	unsigned int size = 0;
	unsigned int i;

	if (str == NULL)
		return (NULL);
	while (str[size] != '\0')
		size++;
	a = malloc((size + 1) * sizeof(char));

	if (a == NULL)
		return (NULL);
	for (i = 0; i <= size; i++)
		a[i] = str[i];
	return (a);
}

/**
 * new_dog - function that creates a new dog
 * @name: name of the new dog to create
 * @age: age of the new dog to create
 * @owner: owner of the new dog to create
 *
 * Return: Null if the function fails
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new;

	new = malloc(sizeof(dog_t));
	if(new == NULL)
		return (NULL);

	new->name = _strdup(name);
	if(new->name == NULL)
	{
		free(new);
		return (NULL);
	}
	new->age = age;
	new->owner = _strdup(owner);
	if (new->owner == NULL)
	{
		free(new->name);
		free(new);
		return (NULL);
	}
	return (new);
}
