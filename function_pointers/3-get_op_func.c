#include "3-calc.h"

/**
 *get_op_func - selecte la bonne fonction pour faire le bon calcul
 *@s: pointeur d'une fonction
 *Return: le pointeur de la fonction qui correspond à l'opération
 */


int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	int i = 0;

	while (ops[i].op != NULL && strcmp(s, ops[i].op) != 0)
	{
		i++;
	}
	return (ops[i].f);
}

/*
 *boucle while pour parcourir le tableau et comparer le pointeur s avec les
 *index d'opérations et retourne la fonction appropriées à l'opérateur
 */
