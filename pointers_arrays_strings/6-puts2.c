#include "main.h"
#include "2-strlen.c"

/**
 * puts2 - check the code
 * @str: variable
 * Return: none cause of void.
 */

void puts2(char *str)
{
	int count = 0;
	int len = _strlen(str);

	while (count < len) /*tant que mon debut est < la longueur du string*/
	{
		if (count % 2 == 0) /*si la longueur divisible par 2*/
		{
			_putchar(str[count]); /*print mon string*/
		}
	count++;/*agremente*/
	}
_putchar('\n');
}
