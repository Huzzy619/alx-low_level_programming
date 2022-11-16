#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Short description
 * @name: First member
 * @age: Second member
 * @owner: Third
 * Description: Longer description
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);

dog_t *new_dog(char *name, float age, char *owner);
#endif
