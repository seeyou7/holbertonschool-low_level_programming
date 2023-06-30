#include "main.h"

/**
 *_strstr - Locate a substring within a string
 * @haystack: The string to search in
 * @needle: The substring to find
 *
 * Return:A pointer to the first occurrence of the substring,or 0 if not found
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		char *h = haystack;
		char *n = needle;

/*Comparer les caractères de la sous-chaîne avec la chaîne*/
		while (*h && *n && (*h == *n))
		{
			h++;
			n++;
		}

/* Si tous les caractères de la sous-chaîne ont été trouvés*/
		if (!*n)
		{
			return (haystack);
/*Renvoyer un pointeur vers la première occurrence*/
		}

		haystack++;
/*Passer au caractère suivant dans la chaîne*/
	}

	return (0);
/*La sous-chaîne n'a pas été trouvée, renvoyer NULL*/
}

