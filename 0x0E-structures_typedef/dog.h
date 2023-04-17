#ifndef _DOG_H
#define _DOG_H

/**
 * struct dog - a dog struct
 * @name: the dog name
 * @age: the age of dog
 * @owner: the dog owner
 *
 * Description: A struct with name, age, and dog owner
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} doggy;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
doggy *new_dog(char *name, float age, char *owner);
void free_dog(doggy *d);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);

#endif
