#include "main.h"

int create_file(const char *filename, char *text_content)
{
	int fichier;
	int bytes_written;

	if (filename == NULL)/*vérification nom de fichier*/
		return (-1);

	fichier = open(filename, O_WRONLY | O_CREAT, 0600);

	if (fichier == -1)/*vérification ouverture de fichier*/
		return (-1);


	if (text_content != NULL)/*si c'est pas null, écrire dedans*/
		bytes_written = write(fichier, text_content, strlen(text_content));

	if (bytes_written == -1)/*si l'écriture a échoué*/
	{
		close(fichier);
		return (-1);
	}

	close(fichier);
	return (1);/*succes*/
}
