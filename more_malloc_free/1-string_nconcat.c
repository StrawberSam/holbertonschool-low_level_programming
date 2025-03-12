#include "main.h"

/**
 *string_nconcat - check the code
 *@s1: première string
 *@s2: seconde string
 *@n: byte de la seconde string qu'on veut concatener à la 1er string
 *Return: pointeur de la nouvelle allocation mémoire
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	size_t count = 0, count2 = 0, i = 0;
	char *s3;

	if (s1 == NULL)/*si s1 est NULL, la string est vide*/
		s1 = "";

	if (s2 == NULL)/*pareil pour s2*/
		s2 = "";

	while (s1[count] != '\0')/*compte la longueur de ma string*/
	count++;

	while (s2[count2] != '\0' && count2 < (size_t)n)/*pareil mais on ajoute n*/
	count2++;

	s3 = malloc((count + count2 + 1) * sizeof(char));/*alloue mémoire*/

	if (s3 == NULL)/*vérifie si l'allocation a fonctionné*/
	{
		return (NULL);
	}

	while (i < count)/*copie s1 dans notre tableau (s3)*/
	{
		s3[i] = s1[i];
		i++;
	}
	i = 0;/*on réinitialise i à zéro*/
	while (i < count2)/*on copie s2 après s1 qui est dns s3*/
	{
		s3[count + i] = s2[i];
		i++;
	}

	s3[count + count2] = '\0';/*on ajoute \0 à la suite de s1&s2*/
	return (s3);
}
