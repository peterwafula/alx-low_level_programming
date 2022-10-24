#include "main.h"

#include <stdio.h>

/**
  *main - This program prints numbers from 1 to 100
  *excluding divisibility of 3 and 5
  *Return: returns 0
*/

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0)
		{
			printf("Fizz");
			continue;
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
			continue;
		}
		else
			printf("%d", i);
		if (i == 100)
			printf("\n");
		else
			printf(" ");
	}
}
