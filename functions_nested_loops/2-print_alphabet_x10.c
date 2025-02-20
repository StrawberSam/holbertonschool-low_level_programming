#include "main.h"

/**
 * print_alphabet_x10 - check the code.
 *
 *
 */

void print_alphabet_x10(void)
{
	int a;

	for (a = 0; a < 10; a++)
	{
		char alphabet;

		for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		_putchar(alphabet);
	}
	_putchar('\n');
	}
}
