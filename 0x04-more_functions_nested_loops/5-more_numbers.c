#include "main.h"

/**
  *more_numbers - Prints numbers 14 times
  *
  *Return: void
*/

void more_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		int j;

		for (j = 0; j < 15; j++)
		{
			_putchar(j + '0');
		}
		_putchar('\n');
	}
	_putchar('\n');
}
