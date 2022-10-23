#include "main.h"

#include <stdio.h>

/**
  *print_diagonal - prints diagonal line
  *@n: number of lines
  *Return: void
*/

void print_diagonal(int n)
{
	int i, j, k;

	char spc;

	spc = ' ';

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (i = 1; i <= n; i++)
		{
			for (k = 1; k < i; k++)
			{
				_putchar(' ');
			}
			_putchar('\');
			_putchar('\n');
		}
	}
}
