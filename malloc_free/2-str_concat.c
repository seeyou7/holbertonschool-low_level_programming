#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
  * str_concat - function that concatenates two strings.
  * @s1: paramater of the function
  * @s2: parameter of the function
  *
  * Return: ptr
  */

char *str_concat(char *s1, char *s2)
{
	int i;
	char *new;
	int s1_lent = strlen(s1);
	int s2_lent = strlen(s2);
	int size = s1_lent + s2_lent + 1;


/*Create space for a new char array (string)*/
/*on the heap large enough to hold the charcters*/
/*in s1 and s2 AND a null terminator*/

/* conditions from  the task*/
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	new = calloc(size, sizeof(char));
	for (i = 0; i < s1_lent; i++)
		new[i] = s1[i];

/*Copiez s2 dans s, mais décalé par la longueur de s1*/
/*pour l'ajouter après s1 !*/
	for (i = 0; i < s2_lent; i++)
		new[(s1_lent) + i] = s2[i];

/* put the null terminator in to end the string*/
	new[size - 1] = '\0';
	return (new);
}

