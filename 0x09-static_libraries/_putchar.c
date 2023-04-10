#include <unistd.h>


/**
 * _putchar - the character c is wriiten to stdout
 * @c: print the character
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set accordingly.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

