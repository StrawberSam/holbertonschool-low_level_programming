#include "variadic_functions.h"

/**
 *sum_them_all - fonction qui additionne touts les paramètres
 *@n: contient les paramètres
 *Return: le total de la somme des paramètres
 */

int sum_them_all(const unsigned int n, ...)
{
	/*déclare i, total en initialisant et un objet pr manipuler les arguments*/
	size_t i, total = 0;
	va_list args;
	/*boucle if si n == 0, return 0*/
	if (!n)
		return (0);
	/*va_start qui initilaise les arguments (objet pour manipuler et les arg)*/
	va_start(args, n);
/*boucle pour additionner les arguments*/
	for (i = 0; i < n; i++)
	{
		total += va_arg(args, size_t);
	}
/*+= C'est un opérateur d'addition et d'affectation. Il ajoute la valeur à
droite de l'opérateur à la variable à gauche. ça équivaut à total = total + x*/
	va_end(args); /*nettoie après utilisation des arguments*/

	return (total);/*retourne le total*/
}
