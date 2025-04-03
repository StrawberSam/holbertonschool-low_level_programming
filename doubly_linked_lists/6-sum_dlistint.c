#include "lists.h"

/**
 * sum_dlistint - Calcule la somme des valeurs d'une liste doublement chaînée
 * @head: Pointeur vers le premier nœud de la liste
 *
 * Return: Somme de toutes les valeurs, ou 0 si la liste est vide
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		if (head == NULL)
			return (0);

		sum += head->n;/* Ajoute la valeur du nœud courant à la somme */
		head = head->next;/* Passe au nœud suivant */
	}

	return (sum);
}
