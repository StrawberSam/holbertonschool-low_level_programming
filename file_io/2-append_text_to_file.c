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

int append_text_to_file(const char *filename, char *text_content)
{
	int fichier;
	int byteswritter;

	if (filename == NULL)
		return (-1);

	fichier = open(filename, O_WRONLY | O_APPEND);

	if (fichier == -1)
		return (-1);

	if (text_content != NULL)/*si pas null, écrire dedans*/
	{
		byteswritter = write(fichier, text_content, _strlen(text_content));

		if (byteswritter == -1)
		{
			close(fichier);
			return (-1);
		}
	}
	close(fichier);
	return (1);
}
