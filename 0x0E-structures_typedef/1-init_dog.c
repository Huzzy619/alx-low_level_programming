#include <stdlib.h>
#include "dog.h"

/**
 *init_dog - the init function
 *@d: the struct that is passsed
 *@name: the name passed
 *@age: age that is passed
 *@owner: the owner
 *Return: the instance created
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return (NULL);

	d->name = name;
	d->age = age;
	d->owner = owner;

	return (d);
}
