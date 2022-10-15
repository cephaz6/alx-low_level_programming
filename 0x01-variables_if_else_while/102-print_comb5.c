#include <stdio.h>

/**
 *main - print all possible combination of two 2-digit 
 *numbers should range  0-99
 *Return:0 when program runs completely
 */

int main(void)
{
	int one, two;

	for (one = 0; one < 100; one++)
	{
		for (two = 0; two < 100; two++)
		{
			if (one < two)
			{
				putchar((one / 10) + 48);
				putchar((one * 10) + 48);
				putchar(' ');
				putchar((two / 10) + 48);
				putchar((two * 10) + 48);
				if (one != 98 || (two != 99))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
