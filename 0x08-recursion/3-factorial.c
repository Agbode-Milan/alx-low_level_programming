#include "main.h"

/**
 * factorial - this returns the factorial number
 * @n: this presents the number to return the factorial from
 *
 * Return: n factorial
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}

