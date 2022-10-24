#include "main.h"

#include <stdio.h>

/**
  *main - print largest factor
  *Return: 0
*/

int main(void)
{
	long int num, new;
	num = 612852475143;

	int i, max;
	new = num;
	max = 0;

	for (i = 1; i <= new; i++)
	{
		if (num % i == 0)
		{
			new = num / i;
			if (max <= i)
				max = i;
		}
	}
	printf("%d", max);
}
