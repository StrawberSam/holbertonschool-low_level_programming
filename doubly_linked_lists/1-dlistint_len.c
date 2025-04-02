#include "lists.h"

/**
 * dlistint_len - Calcule la longueur d'une liste doublement chaînée
 * @h: Pointeur vers le premier nœud de la liste
 * Return: Le nombre de nœuds dans la liste
 */

size_t dlistint_len(const dlistint_t *h)
{
	int length = 0;
	/*Variable pour compter le nombre de nœuds*/

	/*Parcourt la liste tant que le pointeur n'est pas NULL*/
	while (h != NULL)
	{
		length++;/*incrémente le compteur de noeud*/
		h = h->next;/*passe au noeud suivant*/
	}
	return (length);/*retourne le nombre total de noeud*/
}
