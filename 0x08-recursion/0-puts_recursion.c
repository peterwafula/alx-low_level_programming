#include "main.h"

#include <stdio.h>
/**
  *_puts_recursion - recurs a string
  *s: string to be printed
  *Return: returns a void
*/

void _puts_recursion(char *s)
{
	if (strlen(s) == 0)
	{
		_putchar('\n');
		return;
	_putchar(*s);
	_puts_recursion(s + 1);
}
