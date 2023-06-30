#include "main.h"

/**
  * _memset - Fill memory with a constant byte
  * @s: memory area to fill
  * @b: constant byte to fill
  * @n: bytes of memory area to fill
  *
  * Return: the memory area filled
  */
char *_memset(char *s, char b, unsigned int n)
{
/* ptr ==> Starting address of memory to be filled*/
/* b==> Value to be filled*/
/* n ==> Number of bytes to be filled starting*/
/*         *s  to be filled*/
	unsigned int i;

/* Parcourir chaque octet de la zone mémoire*/
	for (i = 0; i < n; i++)

/* Remplir l'octet courant avec la valeur @b*/
		s[i] = b;
	return (s);
}
/*s : Un pointeur vers la zone mémoire à remplir.*/
/*b:L'octet constant qui sera utilisé pour remplir la zone mémoire*/
/*n:Le nombre d'octets à remplir dans la zone mémoire*/

/*L'utilisation de la fonction _memset permet de remplir*/
/*rapidement une zone mémoire avec une valeur constante,*/
/*ce qui peut être utile dans différentes situations,*/
/*comme initialiser un tableau avec une valeur par défaut*/
/*ou effacer une zone mémoire*/
