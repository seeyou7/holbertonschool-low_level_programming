#include "main.h"
/**
 * _strspn - prints the consecutive caracters of s1 that are in s2.
 * @s: source string
 * @accept: searching string
 *
 * Return: new string.
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int found = 0;
	int i;

	while (*s != '\0' && !found)
/*tant que le caractère pointé par 's' n'est pas le caractère*/
/*('\0') et que 'found' est faux*/
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
/*itère sur chaque caractère de la chaîne accept en utilisant*/
/*l'indice i pour accéder aux caractères successifs jusquà*/
/* ce que le caractère nul ('\0') soit rencontré*/
/*indiquant ainsi la fin de la chaîne*/
			if (*s == accept[i])
			{
				count++;
				found = 1;
				break;
			}
		}
		s++;
	}
	return (count);
}
