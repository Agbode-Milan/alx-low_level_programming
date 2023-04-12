#include <stddef.h>
#include <stdlib.h>

/**
 * argstostr - Concatenates all the arguments of the program
 * @ac: The number of arguments
 * @av: The array of arguments
 *
 * Return: If the function fails - NULL
 *         Otherwise - a pointer to the new string
 */

char *argstostr(int ac, char **av)
{
	int i, n, r = 0, l = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (n = 0; av[i][n] != '\0'; n++)
			l++;
	}

	l += ac;

	str = malloc(sizeof(char) * (l + 1));
	if (str == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (n = 0; av[i][n] != '\0'; n++)
		{
			str[r] = av[i][n];
			r++;
		}

		str[r] = '\n';
		r++;
	}

	str[r] = '\0';

	return (str);
}
