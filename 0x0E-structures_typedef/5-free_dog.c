#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - free dog
 * @d: pointer to type dog_t
 * Return: nothing
 */

void free_dog(dog_t *d)
{
free(d);
}