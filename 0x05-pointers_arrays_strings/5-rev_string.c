#include "main.h"

#include <stdio.h>

#include <string.h>

/**
  *rev_string - Print string in reverse
  *@s: string to be printed
  *Return: void
*/

void rev_string(char *s)
{
	int i, n, j;

	n = 0;
	j = 0;
	while (s[n] != '\0')
		n++;
	for (i = n - 1; i >= 0; i--)
	{
		*(s + j) = s[i];
		j++;
	}
}
