#include "main.h"

/**
 *_strdup - returns a pointer to a newly allocated space
 *@str: the string
 *Return: pointer to the duplicated string
 */

char *_strdup(char *str)
{
	int count = 0, i;
	char *str2;

	if (str == NULL) /*vérifier si str est null, si oui retourne null*/
	{
		return (NULL);
	}

	while (str[count] != '\0') /*boucle pour compter ma string*/
	{
		count++;
	}

	str2 = malloc(count + 1); /*allocation de mémoire après compter la lng*/

	if (str2 == NULL) /*si malloc fonctionne pas, retourne null*/
	{
		return (NULL);
	}

	for (i = 0; i < count; ++i) /*copie des caractères de str à str2*/
	{
		str2[i] = str[i];
	}

	str2[i] = '\0'; /*copie caractère null à str2*/

	return (str2);
}
