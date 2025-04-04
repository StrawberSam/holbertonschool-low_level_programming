#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include "main.h"

/**
 * read_textfile - Lit un fichier texte et affiche son contenu
 * sur la sortie standard (écran).
 * @filename: Le nom du fichier à ouvrir et lire.
 * @letters: Le nombre maximum de caractères à lire et afficher.
 *
 * Return: Le nombre réel de caractères lus et affichés.
 * Retourne 0 si une erreur survient (fichier NULL,
 * erreur de lecture, écriture incomplète, etc.).
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;                     /*Descripteur de fichier*/
	char *buffer;               /*Tampon pour stocker les données lues*/
	ssize_t bytes_read;         /*Nombre d'octets réellement lus*/
	ssize_t bytes_written;      /*Nombre d'octets réellement écrits*/

	if (filename == NULL)/*Vérifie si le nom du fichier est NULL*/
		return (0);
	/*Ouvre le fichier en mode lecture seule (O_RDONLY)*/
	fd = open(filename, O_RDONLY);
	if (fd == -1) /*Échec de l'ouverture du fichier*/
		return (0);
	/*Alloue dynamiquement de la mémoire pour contenir 'letters' caractères*/
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(fd);  /*Ferme le fichier ouvert pour éviter une fuite*/
		return (0);
	}
	/*Lit jusqu'à 'letters' caractères depuis le fichier dans le buffer*/
	bytes_read = read(fd, buffer, letters);
	if (bytes_read == -1)  /*Échec de la lecture*/
	{
		free(buffer);
		close(fd);
		return (0);
	}
	/*Écrit les données lues sur la sortie standard (écran)*/
	bytes_written = write(STDOUT_FILENO, buffer, bytes_read);
	if (bytes_written == -1 || bytes_written != bytes_read)
	{
		free(buffer);/*En cas d'échec d'écriture ou d'écriture incomplète*/
		close(fd);
		return (0);
	}

	free(buffer);/*Libère la mémoire allouée dynamiquement*/
	close(fd);/*Ferme le fichier ouvert précédemment*/
	return (bytes_written);/*Retourne le nbr de caractères réellement écrits*/
}
