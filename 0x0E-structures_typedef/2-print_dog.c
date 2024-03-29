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
		printf("Name: %s\n", (d->name) ? d->name : "(nil)");
		printf("Age: %f\n", (d->age) ? d->age : 0);
		printf("Owner: %s\n", (d->owner) ? d->owner : "(nil)");
	}
}
