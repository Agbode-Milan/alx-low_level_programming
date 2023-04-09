#include <stdio.h>
#include "main.h"
/**
 * main - this is the number of arguments that have been passed to the program
 * @argc: the number of arguments
 * @argv: the array of arguments
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
(void) argv; /*Ignore argv*/

	printf("%d\n", argc - 1);
	return (0);
}

