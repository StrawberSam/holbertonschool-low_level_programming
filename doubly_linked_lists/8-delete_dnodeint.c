#include "lists.h"
/**
 * delete_dnodeint_at_index - Supprime un nœud à un index donné.
 * @head: Pointeur vers le début de la liste.
 * @index: L'index du nœud à supprimer (commence à 0).
 * Return: 1 si réussi, -1 si échoué.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head;  /* Pointeur pour parcourir la liste */
	unsigned int i = 0;

	if (current == NULL)/* Si la liste est vide, on ne peut rien supprimer */
	{
		return (-1);
	}
	/* On parcourt la liste pour trouver le nœud à l'index donné */
	while (current != NULL && i < index)
	{
		current = current->next;  /* On va au nœud suivant */
		i++;
	}

	if (current == NULL)/* Si on n'a pas trouvé le nœud, retour d'erreur */
	{
		return (-1);
	}
	/* Si le nœud à supprimer est le premier (head) */
	if (current->prev == NULL)
	{
		*head = current->next;  /* On change le head pour le nœud suivant */
	}
	else/* Relie le nœud précédent au nœud suivant */
	{
		dlistint_t *h1 = current->prev;  /* Le nœud précédent */
		dlistint_t *h2 = current->next;  /* Le nœud suivant */

		h1->next = h2;  /* Relie le nœud précédent au nœud suivant */
	}
	/* Si ce n'est pas le dernier nœud, on met à jour le nœud suivant */
	if (current->next != NULL)
	{
		dlistint_t *h2 = current->next;  /* Le nœud suivant */
		dlistint_t *h1 = current->prev;  /* Le nœud précédent */

		h2->prev = h1;  /* Relie le nœud suivant au nœud précédent */
	}
	free(current);  /* On libère la mémoire du nœud supprimé */
	return (1);  /* Suppression réussie */
}
