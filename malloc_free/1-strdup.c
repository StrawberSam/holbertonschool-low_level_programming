#include "main.h"

/**
 *_strdup - returns a pointer to a newly allocated space
 *@str: the string
 *Return: pointer to the duplicated string
 */

char *_strdup(char *str)
{
	int count, i;
	char *str2 = malloc(*str);


	if (str == NULL)
	{
		return (NULL);
	}

	while (str[count] != '\0')
	{
		count++;
	}

	for (i = 0; str[i] != '\0'; ++i)
	{
		str2[i] = str[i];
	}
	return (str2);
}
