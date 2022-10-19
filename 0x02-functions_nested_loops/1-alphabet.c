#include "main.h"

/**
 *main - print_alphabet prints the 26 alphabets
 *Return: 0 when successful
 */

void print_alphabet(void)
{
	int alpha;
	for (alpha = 0; alpha <= 'z'; alpha++)
	{
		_putchar(alpha);
	}
	_putchar('\n');
}
