#include <stdio.h>
#include "main.h"

/**
 * main - this should print all arguments that it receives
 * @argc: this is the number of arguments presented
 * @argv: the array of arguments
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
int i;
for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}

