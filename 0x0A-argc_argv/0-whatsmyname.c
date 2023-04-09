#include <stdio.h>
#include "main.h"

/**
 * main - this should print the name of the program
 * @argc: this is the number of arguments
 * @argv: this is the number of array of arguments
 *
 * Return: Always 0 (Success)
 */

int main(int argc __attribute__((unused)), char *argv[])

{
	printf("%s\n", *argv);
	return (0);
}

