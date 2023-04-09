#include <stdio.h>
#include "main.h"

/**
 _putchar - this writes the character c to stdout
 * @c: this is the character to print
 *
 * Return: on success 1.
 * On error, -1 is returned and errno is set accordingly
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

