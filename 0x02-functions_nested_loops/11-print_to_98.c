#include "main.h"

#include <stdio.h>

/**
  *print_to_98 - This function prints from a point to 98
  *@n: This is the beginning point
  *Return: This function doesn't return anything
*/

void print_to_98(int n)
{
	for (n; n <= 98; n++)
	{
		if (n ==98)
			printf("%d", n);
		else
			printf("%d, ", n);
	}
	printf("\n");
}
