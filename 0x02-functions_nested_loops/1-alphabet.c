#include "main.h"

/**
  *main - This is the main entry point of my program
  *argument: This program takes no argument
  *Return: This function returns a zero.
*/

void print_alphabet(void)
{
	int ch;
	for (ch = 'a'; ch <= 'z'; ch++)
		_putchar(ch);
	_putchar('\n');
}
