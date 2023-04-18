#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - the struct dog memory allocated is freed
 * @d: dog struct is free
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}

