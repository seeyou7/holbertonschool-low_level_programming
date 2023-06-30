#include "main.h"
/**
 *_strpbrk - locates a character in a string
 *@s: pointer parameter
 *@accept: pointer parameter
 *Description: count bytes
 *Return: pointer
 */
char *_strpbrk(char *s, char *accept)
{
	int	x;
	int	y;
/*Parcours de la chaîne s*/

	for (y = 0; s[y]; y++)
	{
/* Parcours de la chaîne accept*/
		for (x = 0; accept[x]; x++)
		{
/*Si le caractère courant de s correspond à un caractère de accept*/
			if (s[y] == accept[x])
			{
/*Retourne un pointeur vers cette position dans s*/
				return (&s[y]);
			}
		}
	}
/*Aucun caractère correspondant n'a été trouvé, retourne NULL*/
	return (0);
}
