#include "dog.h"
#include <stdlib.h>

/**
 *_strlen -function that returns the length of a string
 *@s: parameter of the function
 *
 *Return: integer
 */

int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}

/**
 *_strcpy - function that copies a string
 *@dest: parameter of the function
 *@src: parameter of the function
 *
 *Return: char
 */

char *_strcpy(char *dest, char *src)
{
	int len = 0;

	while (src[len] != '\0')
	{
		dest[len] = src[len];
		len++;
	}
	dest[len] = '\0';
	return (dest);
}


/**
*new_dog - function to create new struct dog
*@name:element of the structt
*@age: element of the structt
*@owner: element of the struct
*
*Return: ptr to the  type dog_t
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newdog;

	newdog = malloc(sizeof(dog_t));
	if (newdog == NULL)
	{
		free(newdog);
		return (NULL);
	}
	newdog->name = malloc(sizeof(char) * _strlen(name) + 1);
	if (newdog->name == NULL)
	{
		free(newdog->name);
		 free(newdog);
		return (NULL);
	}
	newdog->owner = malloc(sizeof(char) * _strlen(owner) + 1);
	if (newdog->owner == NULL)
	{
		free(newdog->owner);
		free(newdog);
		return (NULL);
	}
	newdog->name = _strcpy(newdog->name, name);
	newdog->age = age;
	newdog->owner = _strcpy(newdog->owner, owner);

	return (newdog);
}
