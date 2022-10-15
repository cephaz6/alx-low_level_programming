#include <stdio.h>

/**
 *main - print single digit numbers of  base 10
 *Return: 0 when program runs successfully
 */

int main(void)
{
	int xnumber = 0;

	while (xnumber < 10)
	{
		printf("%i", xnumber);
		xnumber++;
	}
	putchar('\n');
	return (0);
}
