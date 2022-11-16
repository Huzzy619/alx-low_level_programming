#include "dog.h"
#include <stddef.h>
#include <stdio.h>
/**
 *print_dog - the print function
 *@d: the struct that is passsed
 *Return: the instance created
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	if (d->name != NULL)
		printf("Name: %s\n", d->name);
	else
		printf("Name: (nil)\n");

	if ((int)d->age != NULL)
		printf("Age: %f\n", d->age);
	else
		printf("Age: (nil)\n");

	if (d->owner != NULL)
		printf("Owner: %s\n", d->owner);
	else
		printf("Owner: (nil)\n");

}
