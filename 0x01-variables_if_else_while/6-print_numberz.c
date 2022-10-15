#include <stdio.h>

/**
 *main - print single digit numbers of base 10 
 *zero included
 *Return: 0 when program runs successfully
 */

int main(void)
{
	int xnumb = '0';
	
	while (xnumb <= '9')
	{
		putchar(xnumb);
		xnumb++;
	}
	putchar('\n');
	return (0);
}
