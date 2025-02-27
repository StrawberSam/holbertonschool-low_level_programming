#include "main.h"
#include "2-strlen.c"

/**
 * puts_half - check the code
 * @str: variable
 * Return: Always 0.
 */

void puts_half(char *str)
{
	int len = _strlen(str); /*longueur totale de la chaine*/
	int start = len / 2; /* debut de depart pour la moitie de la chaine*/

	if (len % 2 != 0) /*si la lgn est impaire*/
		start++; /*commencer un caract apres le mid*/

	while (str[start] != '\0') /*imprime caract de la snd moitie*/
	{/*tant qu'on a pas atteint la fin de la chaine*/
		_putchar(str[start]); /*affiche chaque caractere*/
		start++;/*passe au caractere suivant*/
	}
_putchar('\n');/*saut de ligne*/
}
