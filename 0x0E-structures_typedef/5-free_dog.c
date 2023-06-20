#include "dog.h"
#include <stdlib.h>

void free_dog(dog_t *d)
{
if (d != NULL)
{
if (d->name == NULL && d->owner == NULL)
{
free(d);
}
else if (d->owner == NULL)
{
free(d->name);
free(d);
}
else if (d->name == NULL)
{
free(d->owner);
free(d);
}
else
{
free(d->owner);
free(d->name);
free(d);
}
}
}
