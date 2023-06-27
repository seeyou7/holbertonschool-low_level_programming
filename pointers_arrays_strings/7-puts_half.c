#include "main.h"

/**
 *_puts_half - function that prints half of a string
 *@str:the string to be printed
 */

void puts_half(char *str)
{
	int index = 0, len = 0, n;
/*
* index est utilisée comme indice pour parcourir la chaîne str
* len est utilisée pour stocker la longueur de la chaîne,
*n utilisée pour déterminer l'indice de départ de
*la deuxième moitié de la chaîne
*/

	while (str[index++])
		len++;

	if ((len % 2) == 0)
		n = len / 2;

	else
		n = (len + 1) / 2;

	for (index = n; index < len; index++)
		_putchar(str[index]);

	_putchar('\n');
}
/*
*while (str[index++]) len++; : Cette boucle while est utilisée pour compter
*le nombre de caractères dans la chaîne str. À chaque itération
*la variable index est incrémentée et la variable
len est également incrémentée
*
*if ((len % 2) == 0) n = len / 2; : Cette condition vérifie si la longueur
*de la chaîne est un nombre pair en utilisant l'opérateur % qui donne
* le reste d'une division par 2. Si la longueur est pair
* la variable n est initialisée avec la moitié de la longueur (len / 2)
*
* else n = (len + 1) / 2; : Si la longueur de la chaîne est impaire
* la variable n est initialisée avec la valeur (len + 1) / 2
* ce qui donne l'indice de départ
* pour afficher la deuxième moitié de la chaîne.
*
* for (index = n; index < len; index++) _putchar(str[index]);
* Cette boucle for itère à
* partir de l'indice n jusquà l'indice len - 1 de la chaîne str. Elle utilise
* _putchar pour afficher les caractères correspondants à ces indices
*/
