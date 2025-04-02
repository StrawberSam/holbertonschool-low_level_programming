#include "lists.h"
#include <stddef.h>

/**
 *add_dnodeint - Fonction permettant d'ajouter un nœud au début
 *d'une liste doublement chaînée.
 *@head: Pointeur vers le pointeur de la tête de liste.
 *@n: Valeur à insérer dans le nouveau nœud.
 * Return: Adresse du nouveau nœud, ou NULL si l'allocation échoue.
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	/*on crée un nouveau noeud avec malloc*/
	dlistint_t *newnoeud = malloc(sizeof(dlistint_t));
	/*Vérification si malloc a fonctionné*/
	if (!newnoeud)
		return (NULL);

	/*Assigner la valeur n au nouveau noeud*/
	newnoeud->n = n;

	/*pointer vers l'ancienne tête*/
	newnoeud->next = *head;
	newnoeud->prev = NULL;

	/*si la liste est non vide, maj le ptr "prev" vers l'ancienne tête*/
	if (*head != NULL)
		(*head)->prev = newnoeud;/*(*head) car double pointeur*/

	*head = newnoeud;/*maj de la tête de liste*/

	return (newnoeud);
}
