#include <stdio.h>
#include <stdlib.h>
/**
  *init_dog - initialize a variable of type struct dog
  *@d: pointer to struct dog
  *@name: name of the dog
  *@age: age of the dog
  *@owner: name of the  owner
  *Description: initialize a variable of type struct dog
  */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
