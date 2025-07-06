#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees memory allocated for a dog_t struct
 * @d: pointer to dog_t to free
 */
void free_dog(dog_t *d)
{
    if (d == NULL)
        return;

    if (d->name)
        free(d->name);

    if (d->owner)
        free(d->owner);

    free(d);
}
