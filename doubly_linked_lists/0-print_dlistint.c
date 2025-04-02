#include "lists.h"

/**
 *print_dlistint - Affiche tous les éléments d'une liste doublement chaînée
 *@h: Pointeur vers le premier nœud de la liste
 *Return: Le nombre de nœuds dans la liste
 */

size_t print_dlistint(const dlistint_t *h)
{
	int length = 0;
	/*Variable pour compter le nombre de nœuds*/

	/*Parcourt la liste tant que le pointeur n'est pas NULL*/
	while (h != NULL)
	{
		printf("%d\n", h->n);/*affiche la valeur du noeud actuel*/

		length++;/*incrémente le compteur de noeud*/
		h = h->next;/*passe au noeud suivant*/
	}
	return (length);/*retourne le nombre total de noeud*/
}
