#include "3-calc.h"

/* Function prototypes */
int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - Adds two numbers.
 * @a: this is the first number.
 * @b: this is the second number.
 *
 * Return: The sum of a and b.
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Subtracts two numbers.
 * @a: this is the first number.
 * @b: this is the second number.
 *
 * Return: The difference of a and b.
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Multiplies two numbers.
 * @a: this is the first number.
 * @b: this is the second number.
 *
 * Return: The product of a and b.
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Divides two numbers.
 * @a: this is the first number.
 * @b: this is the second number.
 *
 * Return: The result of dividing a by b.
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - Computes the modulus of two numbers.
 * @a: this is the first number.
 * @b: this is the second number.
 *
 * Return: The remainder of dividing a by b.
 */

int op_mod(int a, int b)
{
	return (a % b);
}

