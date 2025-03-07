#include "main.h"

/**
 *main - Write a program that multiplies two numbers.
 *@argc: argument count
 *@argv: argument vector/value
 *Return: 1 if error, 0 for the result
 */


int main(int argc, char *argv[])
{
	int num1, num2, result;

	if (argc != 3)
	{
	printf("error\n");
	return (1);
	}

	num1 = atoi(argv[1]); /*convertis les arguments en entiers*/
	num2 = atoi(argv[2]); /*les fait passer de char à int*/

	result = num1 * num2;

	printf("%d\n", result);

	return (0);
}
