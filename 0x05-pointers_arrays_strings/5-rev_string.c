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
	int i, j, k;
	char d;

	i = 0;
	j = 0;
	while (s[i] != '\0')
		i++;
	k = i - 1;
	for (j = 0; k >= 0 && j < k; k--, j++)
	{
		d = s[j];
		s[j] = s[k];
		s[k] = d;
	}
}
