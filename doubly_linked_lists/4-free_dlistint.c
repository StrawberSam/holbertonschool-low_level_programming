#include "lists.h"
/**
 *free_dlistint -
 *Fonction permettant de libérer toute la mémoire
 *occupée par une liste doublement chaînée.
 *@head: Pointeur vers le premier nœud de la liste.
 *Return: Aucun retour (void). La mémoire est libérée.
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *nextnoeud;

	while (head != NULL)/*boucle pour itérer sur tous les noeuds*/
		{
			/*sauvegarder le noeud suivant*/
			nextnoeud = head->next;
			/*libération du noeud actuel*/
			free(head);
			/*on passe au noeud suivant*/
			head = nextnoeud;
		}
}
