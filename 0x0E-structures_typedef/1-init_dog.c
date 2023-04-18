#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initializes a dog structure with the given values
 * @d: pointer to the dog structure to initialize
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	/* Allocate memory for the dog structure if it's not already allocated */
	if (d == NULL)

		d = malloc(sizeof(struct dog));
	/* Set the values of the dog structure */
	d->name = name;
	d->age = age;
	d->owner = owner;
}

