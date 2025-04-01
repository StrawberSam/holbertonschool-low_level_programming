#include "lists.h"

/**
 *print_list - permet de print tous les élèments de la liste "list_t"
 * @h: pointeur
 * Return: les élèments
 */
size_t print_list(const list_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}

		else
		{
		printf("[%u] %s\n",h->len, h->str);
		}

	i++;
	h = h->next;
	}

	return (i);
}
