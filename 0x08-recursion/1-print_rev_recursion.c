#include "main.h"

/**
 * _print_rev_recursion - the string is printed in reverse
 * @s: printed string
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}

