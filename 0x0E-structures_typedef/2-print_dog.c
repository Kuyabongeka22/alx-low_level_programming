#include <stdio.h>
#include "dog.h"

/**
 * void print_dog - prints struct dog
 * @struct dog: to be printed
 * @d: input
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: %s\n", d->name);
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner);
	}else
	{
		printf("(nil)");
	}
}
