#include "main.h"
#include <string.h>

/**
 * _strlen - check the code
 *@s: character we use
 * Return: count.
 */

int _strlen(const char *s)
{
	int count = 0;

	while (s[count] != '\0')
	{
		count++;
	}
	return (count);
}

/**
 * create_file - Crée un fichier et y écrit du contenu, ou le crée vide.
 * @filename: Nom du fichier à créer.
 * @text_content: Contenu texte à écrire dans fichier (ou NULL pour vide).
 * Return: 1 si succès, -1 si erreur.
 */

int create_file(const char *filename, char *text_content)
{
	int fichier;
	int bytes_written;

	if (filename == NULL)/*vérification nom de fichier*/
		return (-1);

	fichier = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);

	if (fichier == -1)/*vérification ouverture de fichier*/
		return (-1);


	if (text_content != NULL)/*si c'est pas null, écrire dedans*/
	{
		bytes_written = write(fichier, text_content, _strlen(text_content));

		if (bytes_written == -1)/*si l'écriture a échoué*/
		{
			close(fichier);
			return (-1);
		}
	}

	close(fichier);
	return (1);/*succes*/
}
