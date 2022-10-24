#include "main.h"

/**
  *print_triangle - Prints a triangle
  *@size: Size of the triangle
  *Return: void
*/

void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (i = 1; i <= size; i++)
		{
			for (j = size - i; j > 0; j--)
			_putchar(' ');
			for (j = 0; j < h; j ++)
				_putchar('#');
			_putchar('\n');
			if (i == size)
				continue;
			_putchar('\n');
		}
	}
}
