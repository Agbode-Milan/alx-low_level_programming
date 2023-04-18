#ifndef DOG_H
#define DOG_H

/**

struct dog - this is a dog's primary info
@name: the name of the dog
@age: the age of the dog
@owner: the name of the owner
Description: the primary data for the dog is being held in this structure.

*/
struct dog
{
char *name;
float age;
char *owner;
};

/**

dog_t - dog struct for typedef
*/

typedef struct dog dog_t;

/**
 * init_dog - initializes a dog structure with given values
 * @d: a pointer to the dog to initialize
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the name of the owner of the dog
 *
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);

dog_t *new_dog(char *name, float age, char *owner);

void free_dog(dog_t *d);

char *_strcpy(char *dest, char *src);

int _strlen(char *s);

#endif
