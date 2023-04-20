#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - prints a name using a function pointer
 * @name: pointer to the name to be printed
 * @f: pointer to the function that will print the name
 * Description: function takes a name and function pointer as parameters.
 **/


void print_name(char *name, void (*f)(char *))

{
	if (name == NULL || f == NULL)
		return;

	f(name);
}

