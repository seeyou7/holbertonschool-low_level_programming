#include "main.h"

/**
 * cap_string - Capitalizes all words of a string.
 * @str: The string to be capitalized.
 *
 * Return: A pointer to the changed string.
 */
char *cap_string(char *str)
{
	int index = 0;
/* Parcourir chaque caractère de la chaîne */

	while (str[index])
	{
/* Ignorer les caractères qui ne sont pas en minuscule */
		while (!(str[index] >= 'a' && str[index] <= 'z'))
			index++;
/* Mettre en majuscule le caractère courant s'il répond aux conditions */
		if (str[index - 1] == ' ' ||
		str[index - 1] == '\t' ||
		str[index - 1] == '\n' ||
		str[index - 1] == ',' ||
		str[index - 1] == ';' ||
		str[index - 1] == '.' ||
		str[index - 1] == '!' ||
		str[index - 1] == '?' ||
		str[index - 1] == '"' ||
		str[index - 1] == '(' ||
		str[index - 1] == ')' ||
		str[index - 1] == '{' ||
		str[index - 1] == '}' ||
		index == 0)
		str[index] -= 32;
/* Convertir en majuscule */
		index++;
	}

	return (str);
}
