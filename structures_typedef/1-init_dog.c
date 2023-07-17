#include "dog.h"

/**
 * init_dog - function that initialize a VAR of type struct dog
 * @d: pointer tp the element of the struct
 * @name: element of the struct
 * @age: element of the struct
 * @owner: element of the struct
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != 0)
	{
	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
	}
}
