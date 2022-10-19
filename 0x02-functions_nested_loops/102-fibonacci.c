#include "main.h"

#include <stdio.h>

/**
  *main - This is the entry point to our program
  *arguments: This program takes no argument
  *Return: this function returns an int 0
*/

int main(void)
{
	int i, j, k;

	for (k = 0; k < 50; k++)
	{
		for (i = 1, j = 2;;)
		{
			printf("%d, %d, ", i, j);
			i += j;
			j += i;
		}
	}
	return (0);
}
