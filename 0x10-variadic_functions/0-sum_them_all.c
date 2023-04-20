#include "variadic_functions.h"
#include <stdarg.h>

/**
 *  sum_them_all - computes the total sum of its input values.
 * @n: number of inputs to the function
 * @...: variable number of inputs to calculate the total sum of
 *
 * Return: the sum of all parameters, or 0 if n is 0
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, sum = 0;

	va_start(ap, n);

	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);

	va_end(ap);

	return (sum);
}

