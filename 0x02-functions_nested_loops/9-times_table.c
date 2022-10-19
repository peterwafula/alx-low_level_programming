#include "main.h"

#include <string.h>

#include <stdio.h>

/**
  *times_table -Multiplication table
  *Arguments: This function takes no argument
  *Return: This function returns nothing
*/

void times_table(void)
{
	int i, j, ans;

	ans = i * j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (ans <= 9)
				printf(" ");
			if (j == 9)
				printf("%d\n", i * j);
			else
				printf("%d, ", i * j);
		}
	}
}
