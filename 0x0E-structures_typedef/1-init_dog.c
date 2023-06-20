#include"dog.h"
#include<stdlib.h>
/**
 * init_dog - initialize a variable of type struct dog
 * @d: variable of type struct dog
 * @name: name of variable d
 * @age: age of variable d
 * @owner: owner of var d
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
