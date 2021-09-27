#include "dog.h"

/**
 * init_dog - initializes a variable of type struct dog
 * @d: pointer to a variable of type struct dog
 * @name: sring containing name of the dog
 * @age: float containing dog's age
 * @owner: string containing the name of the dog's owner
 *
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == 0)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}
