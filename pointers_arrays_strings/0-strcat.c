#include "main.h"
#include "2-strlen.c"/*compte la longueur de la chaine*/
/**
 * _strcat - check the code
 * @dest:second string
 * @src:first string
 * Return: dest.
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;/*déclare des variables et les incrémente*/
	int j = 0;

	while (dest[i] != '\0')/*permet de parcourir la chaine et s'arrête à \0*/
		i++;
	while (src[j] != '\0')/*fait la même*/
	{
		dest[i] = src[j]; /*copie dest dans src*/
		j++; /*incrémente j et i (passe au caractère suivant)*/
		i++;
	}
	dest[i] = '\0';/*affiche \0 à la fin*/
	return (dest);
}
