#include <stdio.h>
#include "main.h"

/**
 * void print_to_98 - function that prints to 98
 * @n: integer argument passed
 * Return: return 0 on completion
 */


void print_to_98(int n)
{
	if (n < 98)
	{
		while (n < 98)
		{
			printf("%d, ", n);
			n++;
		}
	}
	else if (n > 98)
	{
		while (n > 98)
		{
			printf("%d, ", n);
		}
	}
	printf("98\n");
}
