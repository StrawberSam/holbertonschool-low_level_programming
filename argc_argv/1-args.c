#include "main.h"

/**
 *main - program that prints the number of arguments
 *@argc: argument count
 *@argv: argument vector or value
 *Return: number of arguments
 */

int main(int argc, char *argv[])
{
	int i = 0;

	if (*argv[i] > 0)
	printf("%d\n", argc - 1);
	return (0);
}
