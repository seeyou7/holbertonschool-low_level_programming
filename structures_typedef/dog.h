#ifndef _DOG_H_
#define _DOG_H_

/**
 *struct dog - function that define new type
 *@name: element of the struct dog
 *@age:element of the struct dog
 *@owner:element of the struct dog
 * Return: Always 0.
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
