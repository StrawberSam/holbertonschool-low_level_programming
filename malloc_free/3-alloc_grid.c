#include "main.h"

/**
 *alloc_grid - returns a pointer to a 2 dimensional array of integers
 *@height: lignes
 *@width: colonnes
 *Return: un pointeur du tableau 2D
 */

int **alloc_grid(int width, int height)
{
	int **array;
	int i, h, w;

	if (width <= 0 || height <= 0)/*si width ou height est <= 0, return null*/
	return (NULL);

	array = malloc(height * sizeof(int *));/*alloue mémoire pour grnd tableau*/
	if (!array)
	return (NULL);

	for (i = 0; i < height; i++)
	{
		array[i] = malloc(width * sizeof(int));/*alloue mémoire intérieur*/
		if (!array[i])
		{
			for (; i >= 0; i--)/*boucle pour free*/
			{
				free(array[i]);
			}
		free(array);
		return (NULL);
		}
	}

	for (h = 0; h < height; h++)/*boucle pour initialiser ligne et colonne à 0*/
	{
		for (w = 0; w < width; w++)
		{
			array[h][w] = 0;
		}
	}
	return (array);
}
