#include "main.h"

/**
 * print_alphabet_x10 - print alphabet ten times(10x)
 *
 * Return: 0 when run successful
 */

void  print_alphabet_x10(void)
{
	int alpha;
	int col_filler;

	for (col_filler = 0; col_filler < 10; col_filler++)
	{
		for (alpha = 'a'; alpha <= 'z'; alpha++)
		{
			_putchar(alpha);
		}
		_putchar('\n');
	}
}
