#include "main.h"

/**
*puts2 - function that print every other character
*of a string starting with the first character + \n output is 02468
*instead of 123456789
*@str: parameter of the function
*
* Return: Always 0.
*/

void puts2(char *str)
{
	int len = 0, i;/* len pr stocker la longueur de la chaîne 'str' */
	/*et i comme IndicePourParcourir la chaîn*/

	while (str[len] != '\0')
	{
		len++;
	}
	for (i = 0; i < len; i++)
		/*boucle est utilisée pour parcourir les caractères de la chaîne.*/
	{
		_putchar (str[i]);
		i += 1;
	}
	_putchar ('\n');
}
/*En résumé, la fonction puts2 parcourt les caractères de la chaîne str */
/*en sautant un caractère entre chaque affichage, et affiche ensuite */
/*les caractères alternatifs suivis d'un saut de ligne*/
