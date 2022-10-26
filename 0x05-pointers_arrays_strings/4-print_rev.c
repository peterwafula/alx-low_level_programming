#include "main.h"

#include <stdio.h>

#include <string.h>

/**
  *print_rev - Print string in reverse
  *s: string to be printed
  *Return: void
*/

void print_rev(char *s)
{
	int i;

	for (i = strlen(s); i >= 0; i--)
		printf("%c", s[i]);
}
