#include "dog.h"
#include <stdio.h>

/**
 * print_dog - prints a dog infos
 * @d: pointer to struct of the dog
 *
 * Return: void
 */
void print_dog(struct dog *d)
{
	if (d){
        printf("name: %s\n", d->name ? d->name : "(nil)");
        printf("age: %f\n", d->age);
        printf("owner: %s\n", d->owner ? d->owner : "(nil)");   
	}
}
