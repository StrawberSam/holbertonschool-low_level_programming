#include "lists.h"

/**
 * get_dnodeint_at_index - Récupère un nœud à un index donné dans la liste
 * @head: Pointeur vers le premier nœud de la liste
 * @index: Position du nœud à récupérer (commence à 0)
 *
 * Return: Pointeur vers le nœud trouvé, ou NULL si hors limites
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = head; /* Pointeur pour parcourir la liste */
	size_t count = 0; /* Compteur pour suivre l'index */

	while (current != NULL)
	{
		if (count == index)
			return (current);/* Retourne le nœud et non sa valeur */

		count++;
		current = current->next;
	}
	return (NULL);/* Si l'index dépasse la longueur de la liste */
}
