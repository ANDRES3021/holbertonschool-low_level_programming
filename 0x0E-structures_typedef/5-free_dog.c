#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
  * free_dog - funtion that free dogs.
  * @d: pointer
  *
  */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->owner),free(d->name),free(d);
	}
}
