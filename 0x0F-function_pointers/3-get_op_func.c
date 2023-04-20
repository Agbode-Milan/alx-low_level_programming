#include "3-calc.h"
#include <stdlib.h>

 /**
 * get_op_func - Returns a function pointer that corresponds to operator.
 *
 * @s: operator for which a function pointer is required.
 *
 * Return: pointer to function that corresponds to the given operator.
 * NULL if the operator is not supported.
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (ops[i].op != NULL)
	{
		if (*(ops[i].op) == *s)
			return (ops[i].f);
		i++;
	}

	return (NULL);
}

