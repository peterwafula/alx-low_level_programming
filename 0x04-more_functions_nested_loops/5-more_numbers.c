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
			if (j > 9)
				_putchar(1 + '0');
			_putchar((j % 10) + '0');
		}
		_putchar('\n');
	}
}
