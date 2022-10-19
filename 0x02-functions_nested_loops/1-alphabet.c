#include "main.h"

/**
 *main - print_alphabet prints the 26 alphabets
 *print_alphabet - called in function, in the main.h file
 *Return: 0 when successful
 */

void print_alphabet(void)
{
	int alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		_putchar(alpha);
	}
	_putchar('\n');
}
