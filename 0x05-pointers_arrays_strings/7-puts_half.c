#include "main.h"

/**
  *puts_half - prints half string
  *@str: string
  *Return: void
*/

void puts_half(char *str)
{
	int i, j, k;

	i = 0;

	while (str[i] != '\0')
		i++;
	if (i % 2 == 0)
		j = i / 2;
	else
	{
		j = (i - 1) / 2;
		j++;
	}
	for (k = j; str[k] != '\0'; k++)
		_putchar(str[k]);
	_putchar('\n');
}
