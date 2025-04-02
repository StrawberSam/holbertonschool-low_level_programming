#include "lists.h"
#include <stddef.h>

/**
 *_strlen - returns the length of a string
 *@s: it's a caracters chain*
 *Return: the length of a string
 */
int _strlen(const char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}

/**
 * add_node_end - Ajoute un nouveau nœud à la fin d'une liste chaînée
 * @head: Pointeur vers l'adresse du premier nœud de la liste
 * @str: Chaîne de caractères à copier dans le nouveau nœud
 * Return: Adresse du nouveau nœud, ou NULL en cas d'échec.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp = *head;/*on déclare un pointeur temporaire*/
	/*initialisation à head qui est le premier élèment de la liste*/

	/*aloue la mémoire pour un nouveau noeud*/
	/*taille de la valeur + taille du ptr = list_t*/
	list_t *new_noeud = malloc(sizeof(list_t));

	/*vérification si le nouveau noeud est null*/
	if (new_noeud == NULL)
		exit(98); /*on quitte directement la fonction*/

	new_noeud->str = strdup(str); /*on stock la donnée*/
	if (new_noeud->str == NULL) /*on test la valeur est null*/
	{
		free(new_noeud); /*alors on libère la mémoire*/
		return (NULL); /*et on retourne null*/
	}

	/*on utilise la fonction _strlen pour compter la length*/
	new_noeud->len = _strlen(str);
	new_noeud->next = NULL; /* Le nouveau nœud est le dernier */

	/* Si la liste est vide, on met à jour la tête */
	/*si elle est pas mise à jour, on perd en mémoire le noeud créé*/
	if (*head == NULL)
	{
		*head = new_noeud;
		return (new_noeud);
	}
	/* Sinon, on parcourt la liste pour trouver le dernier nœud */
	/*on utilise un pointeur temporaire pour parcourir la liste*/

	while (temp->next != NULL)
		temp = temp->next;

	/* On ajoute le nouveau nœud en fin de liste */
	temp->next = new_noeud;

	return (new_noeud);
}
