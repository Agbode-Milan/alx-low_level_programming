#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - prints a struct dog
 * @d: pointer to the struct dog to print
 *
 * Description: This function prints the contents of a struct dog.
 * If the struct is NULL, it does nothing. If any of its elements
 * are NULL, it prints "(nil)" instead of the NULL value.
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	if (d->name == NULL)
		d->name = "(nil)";
	if (d->owner == NULL)
		d->owner = "(nil)";

	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}

/**
 * _strlen - returns the length of a string
 * @s: pointer to the string to evaluate
 *
 * Return: the length of the string
 *
 * Description: This function calculates the length of a string.
 */
int _strlen(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}

/**
 * *_strcpy - copies a string point
 * @dest: pointer to the buffer to which the string is copied
 * @src: pointer to the string to be copied
 *
 * Return: pointer to dest
 *
 * Description: This function copies a string, including the null byte, from
 * the source buffer to the destination buffer. It returns a pointer to the
 * destination buffer.
 */
char *_strcpy(char *dest, char *src)
{
	int len, i;

	len = 0;

	while (src[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}

/**
 * new_dog - creates a new dog
 * @name: pointer to the name of the dog
 * @age: age of the dog
 * @owner: pointer to the owner of the dog
 *
 * Return: pointer to the new dog (Success), NULL otherwise
 *
 * Description: This function creates a new instance of struct dog and
 * initializes its elements with the provided parameters. It returns a
 * pointer to the new struct. If it fails to allocate memory, it returns NULL.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int len1, len2;

	len1 = _strlen(name);
	len2 = _strlen(owner);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (len1 + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (len2 + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
	_strcpy(dog->name, name);
	_strcpy(dog->owner, owner);
	dog->age = age;

	return (dog);
}

