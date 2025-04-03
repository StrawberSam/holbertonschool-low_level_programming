#include "lists.h"
#include <stddef.h>

/**
 *add_dnodeint_end - Ajout d'un noeud à la fin du double liste chaînée
 *@head: Pointeur vers le pointeur de la tête de liste.
 *@n: Valeur à insérer dans le nouveau nœud.
 * Return: Adresse du nouveau nœud, ou NULL si l'allocation échoue.
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp = *head;/*on déclare un pointeur temporaire*/
	/*initialisation à head qui est le premier élèment de la liste*/

	/*on crée un nouveau noeud*/
	dlistint_t *newnoeud = malloc(sizeof(dlistint_t));

	/*vérification de malloc*/
	if (!newnoeud)
		return (NULL);

	/*on donne une valeur au nouveau noeud*/
	newnoeud->n = n;
	newnoeud->next = NULL;

	/* Si la liste est vide, on met à jour la tête */
	/*si elle est pas mise à jour, on perd en mémoire le noeud créé*/
	if (*head == NULL)
	{
		newnoeud->prev = NULL;
		newnoeud->next = NULL;
		*head = newnoeud;
		return (newnoeud);
	}

	while (temp->next != NULL)/*parcourir les noeuds pour atteindre la fin*/
	{
		temp = temp->next;
	}

	temp->next = newnoeud;/*maj des ptr*/
	newnoeud->prev = temp;
	return (newnoeud);
}
