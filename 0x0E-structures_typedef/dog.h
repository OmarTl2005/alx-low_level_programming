#ifndef _DOG_H_
#define _DOG_H_

/**
  *struct dog - structures about a dog informations
  *@name: name of the dog
  *@owner: name of the owner
  *@age: age
  *Description: structures about a dog informations.
  */

struct dog
{
	char *name;
	char *owner;
	float age;
};
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
