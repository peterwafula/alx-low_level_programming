#include "main.h"

/**
  *print_alphabet_x10 - This function prints alphabet 10 times
  *arguments: This function takes no arguments
  *Return: This function returns a void.
*/

void print_alphabet_x10(void)
{
	char ch;

	int j;

	for (j = 0; j < 10; j++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}
		_putchar('\n');
	}
}
