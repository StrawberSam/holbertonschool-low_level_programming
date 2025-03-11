#include "main.h"

/**
 *free_grid - free le tableau de la tâche 3
 *@grid: tableau de pointeur
 *@height: les lignes pour les free
 *Return : aucun car void
 */


void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL)/*vérifie si grid est pas égal à 0*/
	return;

	for (i = 0; i < height; i++)/*boucle pour free les lignes du tableau*/
	{
		free(grid[i]);
	}
	free(grid);/*libère le grnd tableau*/
}
