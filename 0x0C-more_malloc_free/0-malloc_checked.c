#include <stdlib.h>
#include "main.h"

/**
 * *malloc_checked - this allocates memory using malloc
 * @b: number of bytes allocated
 *
 * Return: allocated memory or exit with a status value of 98 if malloc fails
 *
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
