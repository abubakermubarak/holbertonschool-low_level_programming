#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - initalize dog object
 * Description: init dog object with attributes
 * @d: structure dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: None
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d = malloc(sizeof(struct dog));
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
