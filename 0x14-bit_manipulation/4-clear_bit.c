#include "main.h"

/**
 * clear_bit - Sets the value of a given bit to 0 in a given number
 * @n: pointer to the number to modify
 * @index: The index of the bit to clear, starting from 0
 *
 * Return: 1 for success, -1 for when an error occurs
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}

