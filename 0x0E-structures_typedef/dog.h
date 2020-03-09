#ifndef DOG_H
#define DOG_H

/**
 * struct dog - dog information
 * @name: name of the dog
 * @age: age of the dog
 * @owner: name of the owner of the dog
 *
 * Description: type of dog's struct and data about the dog
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
/* Function protoypes */
int _putchar(char c);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
