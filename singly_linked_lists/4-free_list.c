#include "lists.h"
#include <stddef.h>

/**
 * free_list - libère toute la mémoire allouée pour la liste chaînée
 * @head: pointeur vers le premier nœud de la liste
 *
 * Cette fonction parcourt la liste chaînée et libère à la fois
 * les chaînes de caractères contenues dans chaque nœud (si elles existent)
 * et chaque nœud lui-même.
 */

void free_list(list_t *head)
{
	list_t *temp;/*initialisation d'un pointeur temporaire*/
	/*parcourir la liste en intération pour libérer un à un les noeuds */
	while (head != NULL)
	{
		temp = head;/*sauvegarde du noeud actuel dans temp*/
		head = head->next;/*avance au noeud suivant*/

		/*vérification de la string si elle a été alouée*/
		if (temp->str)/* Si la chaîne 'str' existe, on la libère */
			free(temp->str);/*libère la mémoire allouée*/

		free(temp);/*libère le noeud temporaire*/
	}
}
