#include "main.h"

/**
 * _strpbrk - this is the entry point
 * @s: this is the input
 * @accept: this is the input
 * Return: Always 0 (Success)
 */

char *_strpbrk(char *s, char *accept)
{
	int k;

	while (*s)
	{
		for (k = 0; accept[k]; k++)
		{
		if (*s == accept[k])
		return (s);
		}
	s++;
	}

return ('\0');
}

