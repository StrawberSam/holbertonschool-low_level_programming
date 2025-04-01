#include "lists.h"

/**
 *print_list - permet de print tous les élèments de la liste "list_t"
 * @h: pointeur
 * Return: les élèments
 */
size_t print_list(const list_t *h)
{
	size_t i = 0;/*Compteur du nombre d'éléments dans la liste*/

/*Parcours de la liste jusqu'à ce que h soit NULL (fin de la liste)*/
	while (h != NULL)
	{
		if (h->str == NULL)/*Vérifie si la chaîne de caractères est NULL*/
		{
			printf("[0] (nil)\n");/*Affiche [0] (nil) pour un nœud sans texte*/
		}

		else
		{
		printf("[%u] %s\n", h->len, h->str);/*Affiche [longueur] texte*/
		}

	i++;/*Incrémente le compteur d'éléments*/
	h = h->next;/*Passe au noeud suivant*/
	}

	return (i);/*retourne le nombre total d'élèments parcourus*/
}
