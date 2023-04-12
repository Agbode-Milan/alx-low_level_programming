#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - duplicates a string
 * @str: string to duplicate
 *
 * Return: 0 or pointer to duplicate
 */

char *_strdup(char *str)
{
	char *dup_str;
	int i;

	if (str == NULL)
		return (NULL);

	i = 0;
	while (str[i] != '\0')
		i++;

	dup_str = malloc(sizeof(char) * (i + 1));

	if (dup_str == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		dup_str[i] = str[i];

	dup_str[i] = '\0';

	return (dup_str);
}

