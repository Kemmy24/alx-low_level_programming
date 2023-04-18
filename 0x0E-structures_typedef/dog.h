#ifndef DOG_H
#define DOG_H

/**
 * struct dog - the dog
 * @name: member 1
 * @age: member 2
 * @owner: member 3
 */

struct dog
{
	char *name;
	float age;
	char *owner;
} dog;

void init_dog(struct dog *d, char *name, float age, char *owner);
typedef struct dog dog_t;
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /* DOG_H */
