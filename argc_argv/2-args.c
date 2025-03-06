#include "main.h"

/**
 *main - program that prints all the argument
 *@argc: argument count
 *@argv: argument vector or value
 *Return: all the arguments, one per line
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	printf("%s\n", argv[i]);
	return (0);
}
