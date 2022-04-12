#ifndef _DOG_H_
#define _DOG_H_

/**
 * struct dog - dog details
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 *
 * Description: this shows the dog's name,
 * age and owner
 */

struct dog
{
char *name;
float age;
char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
