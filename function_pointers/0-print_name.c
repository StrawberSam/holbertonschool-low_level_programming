#include "function_pointers.h"

/**
 *print_name - function that print a name
 *@name: nom
 *@f:pointeur qui pointe une variable
 *Return: rien car void
 */

void print_name(char *name, void (*f)(char *))
{
	if (f != 0)
		f(name);
}
