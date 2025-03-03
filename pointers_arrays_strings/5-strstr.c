#include "main.h"

/**
 * @brief
 *
 */

char *_strstr(char *haystack, char *needle)
{
	int i = 0;

	while (haystack[i] != '\0')
	{
		if (needle [i] != haystack[i])
		return (needle);
	}
	i++;
	return (NULL);
}
