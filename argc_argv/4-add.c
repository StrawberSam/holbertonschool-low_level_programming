#include "main.h"
#include <ctype.h>

/**
 *main - add positive numbers.
 *@argc: argument count
 *@argv: argument vector
 *Return: 0 for the result, 1 for not digit
 */

int main(int argc, char *argv[])
{
	int i, j, result = 0;

	if (argc == '1')
		{
		printf("0\n");
		}

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}

		result += atoi(argv[i]);
	}
	printf("%d\n", result);
	return (0);
}
