#include "dog.h"
#include <stdio.h>

/**
 * print_dog - prints dog details
 * @d: pointer to struct dog
 *
 * Return: nothing
 */

void print_dog(struct dog *d)
{
if (d)
{
if (d->name == NULL)
{
printf("Name: (nil)\n");
}
else
{
printf("Name: %s\n", d->name);
}
print("Age: %f\n", d->age);
if (d->owner == NULL)
{
printf("Owner: (nil)\n");
}
else
{
print("Owner: %s\n", d->owner);
}
}
}
