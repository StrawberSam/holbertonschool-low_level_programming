#include "main.h"

/**
 * _memcpy - check the code
 *@dest: destination
 *@src: source
 *@n: number of bytes
 * Return: Always 0.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	while (n > 0)
	{
		dest[n - 1] = src[n - 1];
		n--;
	}
	return (dest);
}
