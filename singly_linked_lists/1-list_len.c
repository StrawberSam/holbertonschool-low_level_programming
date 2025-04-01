#include "lists.h"

/**
 *list_len - fonction qui retourne le nombre de noeud dans une liste chaînée
 * @h: pointeur qui pointe le 1er élèment de la liste
 * Return: le nombre d'élèments de la liste chaînée
 */
size_t list_len(const list_t *h)
{
	int length = 0;

	while (h != NULL)
	{
		length++;
		h = h->next;
	}
	return (length);
}
