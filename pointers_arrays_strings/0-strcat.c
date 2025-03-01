#include "main.h"

/**
 * _strcat - check the code
 * @dest:second string
 * @src:first string
 * Return: dest.
 */

char *_strcat(char *dest, char *src)
{
    /*Déplace le pointeur 'dest' à la fin de la chaîne existante.*/
	while (*dest)
	{
		dest++;
	}

    /*Copie le contenu de 'src' à la fin de 'dest'.*/
	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
	}

    /* Ajouter un caractère nul à la fin de la nouvelle chaîne.*/
	*dest = '\0';

	return (dest);/*Retourner l'adresse originale de 'dest'.*/
}
