#include "main.h"

/**
 * main - function that prints alphabets
 *
 * Return: always 0
 */

int main(void)
{
	int i;
	char j;

	for (i = 1 ; i <= 10 ; i++)
	{
		for (j = 'a' ; j <= 'z' ; j++);
			_putchar(j);
		putchar('\n');
	}
}
