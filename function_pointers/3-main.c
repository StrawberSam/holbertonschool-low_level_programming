#include "3-calc.h"

/**
 *main - fonction de base
 *@argc: argument count
 *@argv: argument vector
 *Return: 0 en cas de succès, sinon exit() est appelée avec un code d'erreur
 */

int main(int argc, char *argv[])
{
	int num1, num2, resultat;
	/*Déclaration d'un pointeur de fonction pour l'opération à effectuer*/
	int (*operation)(int, int);
/*Vérification du nombre d'arguments. il en faut 4 (nom du prog + 3 arg)*/
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}/*Si incorrect, afficher une erreur et quitter avec le code 98*/
/*Conversion des arguments en entiers*/
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
/*Appel à la fonct get_op_func() pour obtenir la fonction d'opé correspondante*/
	operation = get_op_func(argv[2]);/*argv[2] contient l'opé +, -, *, etc*/

	if (operation == NULL)
	{
		printf("Error\n");
		exit(99);
	}
/*Si la fonct d'opé est non trouvée, affiche une erreur et quit avec code 99*/
/*Vérification spéciale pour les opérations de division et modulo*/
	if ((*argv[2] == '/' || *argv[2] == '%') && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}
/*Si division ou modulo par zéro, afficher une erreur et quitter avec code 100*/
/*Exécution de l'opération avec les deux nombres*/
	resultat = operation(num1, num2);
	/*Appel de la fonction d'opération avec num1 et num2 comme paramètres*/
	printf("%d\n", resultat);
/*Affichage du résultat de l'opération*/
	return (0);
}/*Retourner 0 pour indiquer une exécution réussie*/
